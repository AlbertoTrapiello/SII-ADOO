#pragma once

class PoliticaSalarial
{
public:
	virtual float getSalarioNeto() = 0;

};

class SalarioBase: public PoliticaSalarial
{
	class Factoria;//Para que al hacer friend class Factoria le suene. Ya la linkará luego si eso, así me quito una dependencia
	friend class Factoria;
	class Nomina;//Si no pones esto haría lazo mortal si las incluyo recursivamente Nómina en PoliticasSalariales y viceversa
	Nomina *pNomina;//para que reciba aquí los datos pasados con el this de Factoria:getinstancia
	//como es común a las dos clases heredadas se podría factorizar poniéndolas en la superclase
	SalarioBase(Nomina *pNomina): pNomina(pNomina) {}
public:
	float getSalarioNeto()
	{
		return pNomina->getSalarioBase()*(1 - pNomina->getIRPF());//el algoritmo colabora con las otras clases para que pueda calcular el salarioNeto
	}

private:
};
