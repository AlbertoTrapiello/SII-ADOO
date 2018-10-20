#ifndef  _LIBROS_
#define _LIBROS_

#include "Publicacion.h"

class Libro : public Publicacion {
	string autor;
	friend class Publicacion;
	Libro(string t, string a) :
		autor(a) {
		titulo = t;
	}
public:
	virtual void listar() {
		Publicacion::listar();
		cout << " Autor: " << autor << endl;
	}
};

#endif // !_LIBROS_
