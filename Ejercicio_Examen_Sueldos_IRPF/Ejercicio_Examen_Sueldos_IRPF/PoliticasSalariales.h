#pragma once

class PoliticaSalarial
{
public:
	virtual float getSalarioNeto() = 0;

};

class SalarioBase: public PoliticaSalarial
{
	class Factoria;//Para que al hacer friend class Factoria le suene. Ya la linkar� luego si eso, as� me quito una dependencia
	friend class Factoria;
	class Nomina;//Si no pones esto har�a lazo mortal si las incluyo recursivamente N�mina en PoliticasSalariales y viceversa
	Nomina *pNomina;//para que reciba aqu� los datos pasados con el this de Factoria:getinstancia
	//como es com�n a las dos clases heredadas se podr�a factorizar poni�ndolas en la superclase
	SalarioBase(Nomina *pNomina): pNomina(pNomina) {}
public:
	float getSalarioNeto()
	{
		return pNomina->getSalarioBase()*(1 - pNomina->getIRPF());//el algoritmo colabora con las otras clases para que pueda calcular el salarioNeto
	}

private:
};
