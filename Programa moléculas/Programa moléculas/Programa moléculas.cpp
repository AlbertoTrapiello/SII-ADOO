// Programa moléculas.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Atomo.h"
#include "MoleculaAgua.h"
#include "VaporAgua.h"

int main()
{
	VaporAgua vapor(30); //30 moleculas de agua
	vapor.CalcularPosicion();
	vapor.Dibuja();
	system("PAUSE");
    return 0;
}

