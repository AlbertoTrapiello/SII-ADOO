#ifndef _CAJERO_
#define _CAJERO_

#include "Personaje.h"
#include "Caja.h"

class Cajero :public Personaje
{
	//el cajero necesita interacionar con la caja
	Caja *pCaja;
public:
	Cajero(float c): Personaje(c) {}//Vínculo de interacción entre Cajero y caja
	void Gestiona(Caja *p)
	{
		pCaja = p;
	}
	virtual void Recibe (float c) //Facilita en un futuro la adición de Otros cajeros
	{
		pCaja->Ingresa(c);
		saldo += pCaja->Saca(c);
	}
};
#endif // !