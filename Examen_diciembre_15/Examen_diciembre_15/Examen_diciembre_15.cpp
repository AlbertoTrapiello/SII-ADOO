// Examen_diciembre_15.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"

#include <vector>
#include <iostream>

using namespace std;

typedef enum { REY, PEON } TipoPieza;
typedef enum { MADERA } TipoTablero;
typedef enum { BLANCO, NEGRO } Color;
class Pieza { … };
class Rey { … };
class Peon { … };
class Tablero { … };
class TableroMadera { … };
class Factoria { … };
int main()
{
	Factoria &factoria = Factoria::getInstancia();
	Pieza *p1 = factoria.crearPieza(REY, BLANCO);
	Pieza *p2 = factoria.crearPieza(PEON, NEGRO);
	Tablero *tablero = factoria.crearTablero(MADERA);
	tablero->setPieza(p1, 'e', 8);
	tablero->setPieza(p2, 'a', 2);
	cout << "Pieza: " << p1->getTipoPieza() << " " <<
		p1->getColor() << " " << tablero->getPosPieza(p1) <<
		endl;
	cout << "Pieza: " << p2->getTipoPieza() << " " <<
		p2->getColor() << " " << tablero->getPosPieza(p2) <<
		endl;
	delete tablero;
}