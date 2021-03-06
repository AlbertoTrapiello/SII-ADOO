// Examen Enero 2017.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <vector>
#include <string>
#include <iostream>
#include "Biblioteca.h"


using namespace std;

int main() {
	Biblioteca biblioteca;
	biblioteca.add_Publicacion(	Publicacion::metodoFabricacion(LIBRO, "El Quijote", "Cervantes"));
	biblioteca.add_Publicacion(	Publicacion::metodoFabricacion(	REVISTA, "Mundo Electronico", "", 2016));
	cout << "Lista de Publicaciones:" << endl;
	biblioteca.listar();
	system("PAUSE");
	return 0;
}

/*//////////////////////////////////
Ejecución del programa
//////////////////////////////////
Lista de Publicaciones :
Titulo: El Quijote Autor : Cervantes
	Titulo : Mundo Electronico Fecha : 2016*/