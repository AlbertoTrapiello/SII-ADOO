// Examen Julio 2017.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <stdlib.h>
#include "Jugador.h"
#include "Personaje.h"
#include "Cajero.h"


int main()
{
	Jugador jugador(100);
	Cajero cajero(100);
	Caja caja(100);

	jugador.Conecta(&cajero);//a través del interlocutor en la superclase
	cajero.Gestiona(&caja);
	jugador.Recibe(300);
	jugador.Paga(50);

	system("PAUSE");
    return 0;
}

