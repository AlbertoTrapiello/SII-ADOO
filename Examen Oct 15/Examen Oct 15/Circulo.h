#ifndef _CIRCULO_
#define _CIRCULO_


#include <iostream>
#include "Figura.h"

using namespace std;

const float pi = 3.141592;

class Circulo : public Figura
{
protected:
	float radio;
private:
	friend class Figura;
	Circulo(float r) : Figura(CIRCULO, pi*r*r), radio(r) {}
public:
	virtual void list()
	{
		cout << "Circulo de radio " << radio << endl; //el cout est� dentro de la clase, en la soluci�n no est� hecho as�. implementado con friend
	}
};

#endif // !_CIRCULO_
