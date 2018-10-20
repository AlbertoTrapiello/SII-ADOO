#include "stdafx.h"
#include "Libro.h"
#include "Revista.h"

Publicacion * Publicacion::metodoFabricacion (TipoPublicacion elTipo, string t,	string a, unsigned f) 
{
	if (elTipo == LIBRO) return new Libro(t, a);
	else if (elTipo == REVISTA) return new Revista(t, f);
	else return 0;
}
