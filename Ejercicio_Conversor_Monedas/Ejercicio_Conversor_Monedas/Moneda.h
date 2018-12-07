#pragma once

class IMoneda
{

};

class Euro : public IMoneda
{
	class ConversorMoneda;
	class Factoria;
	ConversorMoneda *pConversor;
	friend class Factoria;
	Euro(ConversorMoneda * p) : pConversor(p) {}
public:
	float getEuros() { return pConversor->getCantidadDinero(); }
	float getLibra() { return pConversor->getCantidadDinero()*pConversor->getfactorEL(); }
	float getDollar() { return pConversor->getCantidadDinero()*pConversor->getfactorED(); }

};
