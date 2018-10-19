#ifndef _CUADRIPOLOS_
#define _CUADRIPOLOS_
#endif

#include <vector>
#include "ElementoPasivo.h"

using namespace std;

class Cuadripolo
{
	vector <ElementoPasivo *> laListaElementosPasivos;
	unsigned num_R, num_L, num_C;
public:
	void AddComponent (TipoElemento t, float v)
	{
		if (t == R)
		{
			laListaElementosPasivos.push_back(ElementoPasivo::metodoFabricacion(t, v, ++num_R));
		}
		if (t == L)
		{
			laListaElementosPasivos.push_back(ElementoPasivo::metodoFabricacion(t, v, ++num_L));
		}
		if (t == C)
		{
			laListaElementosPasivos.push_back(ElementoPasivo::metodoFabricacion(t, v, ++num_C));
		}
	}
	void visualizar(ElementoPasivo *p)
	{
		if (p->getTipo == R) cout << (Resistencia*)p;
		else if (p->getTipo == L) cout << (Bobina*)p;
		else (p->getTipo == C) cout << (Condensador*)p;

	}
	void list()
	{
		for each (laListaElementosPasivos.begin(), laListaElementosPasivos.end(), visualizar());
	}
};