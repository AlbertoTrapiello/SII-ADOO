#ifndef  _PUBLICACION_
#define _PUBLICACION_


#include <string>
#include <iostream>

using namespace std;

typedef enum { LIBRO, REVISTA } TipoPublicacion;

class Publicacion {
protected:
	TipoPublicacion elTipo;
	string titulo;
public:
	static Publicacion *
		metodoFabricacion(TipoPublicacion, string,
			string, unsigned f= 0);
	virtual void listar() {
		cout << "Titulo: " << titulo;
	}
};

#endif // !_PUBLICACION