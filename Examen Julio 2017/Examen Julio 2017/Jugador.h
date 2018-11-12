#ifndef _JUGADOR_
#define _JUGADOR_

#include "Personaje.h"

class Jugador: public Personaje
{
public:
	Jugador (float c): Personaje(c) {}
	void Paga(float c)
	{
		Interlocutor->Recibe(c);
		saldo -= c;
	}
};

#endif // !