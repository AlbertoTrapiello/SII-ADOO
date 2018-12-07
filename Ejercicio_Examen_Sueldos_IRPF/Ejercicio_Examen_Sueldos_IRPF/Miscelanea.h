#pragma once
#include "PoliticasSalariales.h"

class Nomina
{
	PoliticaSalarial *pSalario;
	int opcion;
	float IRPF;
	float salariobase;
public:
	Nomina() {}

	float getSalarioNeto () { return pSalario->getSalarioNeto(); } //la complejidad está en SalarioBase y SalarioBonus
	void setOpcion (int opcion)
	{	
		opcion = opcion;
		pSalario = Factoria::getInstancia->crearPoliticaSalarial(opcion, this); //le mandas los datos para que pueda calcular 
		//colaboran entre sí las clases, al pasarle el this le pasas el contexto para que sepa todo 
	}
private:

};

