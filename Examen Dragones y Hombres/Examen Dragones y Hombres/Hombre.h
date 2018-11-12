#ifndef  _HOMBRE_
#define _HOMBRE_


#include "Luchadores.h"

//principio de sustuci�n de Liskov
//mientras que mantengas la interfaz vas a poder seguir a�adiendo dem�s personajes y el cliente no se ve afectado

class Hombre : public ILuchadores
{
	friend class FactoriaUnicaObjetos; //es del segundo parcial. Con Singletone o algo
	Hombre();//nadie puede fabricar Hombres, solo puede ser creado por la factor�a 
public:
	virtual void lanzarArma();
	virtual void moverse();
	virtual void dibuja();
	virtual void morir();
};

#endif // ! _LUCHADORES_