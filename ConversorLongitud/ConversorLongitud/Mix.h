#pragma once

enum TipoLongitud {Millas, Metro, Pulgada, Pies};

class ILongitud
{

};

class Metros : public ILongitud
{
	ConvertidorLongitud *pConvertidor;
	friend class Factoria;
	Metros(ConvertidorLongitud *p): pConvertidor(p) {}
	float getMetros() { return pConvertidor->getCantidad(); }
	float getMillas() { return pConvertidor->getCantidad * pConvertidor->getFactorMetrosMillas(); }
};

class Factoria
{

};

class ConvertidorLongitud
{
	TipoLongitud elTipo;
	float cantidad;
	ILongitud *pLongitud;
public:
	ConvertidorLongitud(TipoLongitud t, float c): elTipo(t), cantidad(t) 
	{
		pLongitud = Factoria::getInstancia->CrearTipoLongitud(elTipo, cantidad, this);
	}
	ConvertidorLongitud()
	{
		if (pLongitud)	delete pLongitud;
	}
	float getMetros() { return pLongitud->getMetros; }
};
