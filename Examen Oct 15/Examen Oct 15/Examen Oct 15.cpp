// Examen Oct 15.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Pizarra.h"
#include <iostream>

using namespace std;

// Código de test
int main()
{
	Pizarra pizarra;
	pizarra.add_Figuras(Figura::Factoria(CIRCULO, 1));
	pizarra.add_Figuras(Figura::Factoria(RECTANGULO, 1, 2));
	cout << "Lista de figuras:" << endl;
	pizarra.list();
	cout << "Suma total area: " << pizarra.sumar_areas() << endl;
	system("PAUSE");
	return 0;
}
/*//////////////////////////////////////
//Resultado en consola
//////////////////////////////////////
Lista de figuras :
Circulo de radio 1
Rectangulo de ancho 1 y alto 2
Suma total area : 5.14152*/