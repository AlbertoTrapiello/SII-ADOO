#ifndef  _BIBLIOTECA_
#define _BIBLIOTECA_



#include <vector>
#include <algorithm> 
#include "Publicacion.h"

class Biblioteca {
	vector<Publicacion *> listado;
public:
	Biblioteca() {}
	~Biblioteca() {
		for (int i = 0; i<listado.size(); i++)
			delete listado[i];
	}
	void listar() {
		for (int i = 0; i<listado.size(); i++)
			listado[i]->listar();
	}
	void add_Publicacion(Publicacion *p) {
		listado.push_back(p);
	}
};
#endif // !_BIBLIOTECA_