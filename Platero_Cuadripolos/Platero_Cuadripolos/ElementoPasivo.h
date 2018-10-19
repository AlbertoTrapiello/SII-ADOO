#ifndef _ELEM_PASIVOS_
#define _ELEM_PASIVOS_
#endif

#include <iostream>

using namespace std;

typedef enum {R, L, C} TipoElemento;



class ElementoPasivo
{
protected:
	float valor;
	TipoElemento elTipo;
	unsigned int ID;
public:
	ElementoPasivo(TipoElemento t, float v, unsigned int n) : elTipo(t), valor(v), ID(n) {}
	static ElementoPasivo * metodoFabricacion(TipoElemento t, float v, unsigned int n);
	friend ostream & operator << (ostream & os, const ElementoPasivo * pEP)
	{
		return os << pEP->getID() << ":valor = " << valor << pEP->getvalor() << endl;
	}
};