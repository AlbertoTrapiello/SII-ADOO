#pragma once
#include "Moneda.h"

typedef enum TP { EURO, DOLLAR, LIBRA}TipoMoneda;

class ConnversorMoneda
{
	IMoneda *pMoneda;
	float factorED;
	float factorEL;
	float CantidadDinero;
	TipoMoneda tipoMoneda;
public:
	ConnversorMoneda (float factorED, float factorEL, TipoMoneda t, float c): factorED(factorEL), factorEL(factorEL), tipoMoneda(t), CantidadDinero(c) 
	{
		pMoneda = Factoria::getinstancia->crearMoneda(this);
	}
	//hemos hecho clases altamente cohesivas por lo que aquí no necesiamos hacer nada de la algoritmia
	float getEuros() { return pMoneda->getEuros(); }
};
