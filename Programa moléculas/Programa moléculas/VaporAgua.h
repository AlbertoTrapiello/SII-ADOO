#ifndef  _VAP_AGUA_
#define _VAP_AGUA

#include <vector>
#include "MoleculaAgua.h"
#include <algorithm>

using namespace std;

void Dibujar(MoleculaAgua *m)	//Funcion aparte para poder usar el for_each
{
	m->Dibuja();
}

class VaporAgua
{
protected:
	vector <MoleculaAgua *> moleculas;
	int num_moleculas;
public:
	VaporAgua(int n) : num_moleculas(n)
	{
		for (int i = 0; i < n; i++)
		{ 
			moleculas.push_back(new MoleculaAgua);
		}
	}
	void CalcularPosicion()
	{
		for (int i = 0; i < moleculas.size(); i++) // forma tradicional
		{
			moleculas[i]->CalcularPosicion(); // es flecha porque tengo un vector de punteros
		}
	}
	void Dibuja() //forma chula 
	{
		for_each(moleculas.begin(), moleculas.end(), Dibujar);
	}
	~VaporAgua()
	{
		//delete y luego clear
	}
};

#endif // !1 _VAP_AGUA_