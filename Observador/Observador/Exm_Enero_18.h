#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Subject {
	vector < class Observer * > views;
	int value;
public:
	void attach(Observer *obs) { views.push_back(obs); }
	void setVal(int val) {
		value = val;
		notify();
	}
	int getVal() { return value; }
	void notify();
};
class Observer {
	Subject *model;
	int denom;
public:
	Observer(Subject *mod, int div) {
		model = mod;
		denom = div;
		model->attach(this);
	}
	virtual void update() = 0;//cada observer actuará según su propia política
protected:
	Subject * getSubject() { return model; }//permite colaborar, que los observadores interaccionene con el observable
	int getDivisor() { return denom; }
};
void Subject::notify() {
	for (int i = 0; i < views.size(); i++)
		views[i]->update();//les manda a cada observadr que se actualicen porque se ha modificado algo
}
class DivObserver : public Observer {
public:
	DivObserver(Subject *mod, int div) :Observer(mod, div) {}
	void update() {
		int v = getSubject()->getVal(),
			d = getDivisor();
		cout << v << " div " << d << " is "	<< v / d << '\n';
	}
};
class ModObserver : public Observer {
public:
	ModObserver(Subject *mod, int div) : Observer(mod, div) {}
	void update() {
		int v = getSubject()->getVal(), d = getDivisor();
		cout << v << " mod " << d << " is " << v % d << '\n';
	}
};

int main() 
{
	Subject subj;
	DivObserver divObs1(&subj, 4);//al pasarle la referencia del sujeto consigo que el observer se conecte al observado 
	DivObserver divObs2(&subj, 3);
	ModObserver modObs3(&subj, 3);
	//MulObserver mulObs4Obs4(&subj,2);
	subj.setVal(12);
}