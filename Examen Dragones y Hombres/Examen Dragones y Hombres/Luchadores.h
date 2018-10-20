#ifndef  _ILUCHADORES_
#define _ILUCHADORES_
#endif // ! _LUCHADORES_


typedef enum { HOMBRE, DRAGON } TipoLuchador;

class ILuchadores //es una interfaz 
{
protected:
	TipoLuchador elTipo;
public:
	virtual void lanzarArma() = 0;
	virtual void moverse() = 0;
	//y demás
};