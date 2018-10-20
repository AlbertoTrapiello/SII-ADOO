#ifndef _PIZARRA_
#define _PIZARRA_


#include <vector>
#include <algorithm>
#include "Figura.h"
#include <iostream>

using namespace std;

void listar(Figura *);

class Pizarra
{
	vector <Figura *> figuras;
public:
	Pizarra() {}
	void add_Figuras(Figura * pFigura)
	{
		figuras.push_back(pFigura);
	}
	void list()
	{
		for_each (figuras.begin(), figuras.end(), listar);
	}
	float sumar_areas()
	{
		float area = 0;
		for (int i = 0; i < figuras.size(); i++)
		{
			area += figuras[i]->getarea();
			cout << "Area " << i << " : " << area << endl;
		}
		return area;
	}
	//falta el destructor de Pizarra que es un bucle que delete cada Figura del vector
	~Pizarra()//Creo que es así 
	{
		for (int i = 0; i < figuras.size(); i++)
		{
			delete figuras[i];
		}
		figuras.clear();
	}
};

void listar (Figura * pFig)
{
	pFig->list();//debido a que list es polimórfica (viene de la calse abstracta Figuras)
}
//Me tengo que llevar el cout del sistema, que permite que sean polimórficas. 
//La solución del examen hace que sean amigas y que por tanto no sean polimórficas, pero ya no necesetas llevar el promt dels sistema (cout creo)
#endif // !_PIZARRA_