#ifndef  _ATOMO_
#define _ATOMO_
#include <iostream>

using namespace std;


class Atomo
{
protected:
	float x;
	float y;
	float z;
	int numero_atomico;
	Atomo* enlace;
public:
	Atomo(int num)
	{
		numero_atomico = num;
	}
	virtual ~Atomo()
	{

	}
	void Enlaza(Atomo* a)
	{
		enlace = a;
	}
	void CalcularPosicion()
	{
		//Calcular cosas
	}
	void Dibuja()
	{
		//glut
		cout << "Dibuja" << endl;
	}

};

#endif // ! _ATOMO_