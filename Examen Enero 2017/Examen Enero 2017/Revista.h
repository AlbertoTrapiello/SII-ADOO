#ifndef  _REVISTA_
#define _REVISTA_


#include "Publicacion.h"

class Revista : public Publicacion {
	unsigned anyo;
	friend class Publicacion;
	Revista(string t, unsigned a) :anyo(a)
	{
		titulo = t;
	}
public:
	virtual void listar() {
		Publicacion::listar();
		cout << " Fecha: " << anyo << endl;
	}
};
#endif // !_REVISTA_