// ListaVehiculo.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Solution.h"
#include <iostream>
#include <vector>
using namespace std;
typedef enum { AUTO, CAMION } tipoVehiculo;
class Vehiculo { … };
class Automovil { … };
class Camion { … };
class ListaVehiculos { … };
class Factoria { … };
void add_autos(ListaVehiculos &);
void add_camiones(ListaVehiculos &);
int main()
{
	ListaVehiculos lista;
	add_autos(lista);
	add_camiones(lista);
	for (unsigned i = 0; i<lista.size(); i++)
		lista.imprime(i);
	return 0;
}
void add_autos(ListaVehiculos & lista)
{
	Factoria laFactoria = Factoria::getInstancia();
	lista.addVehiculo(laFactoria.crearVehiculos(AUTO, "1234 AAA", 5));
	lista.addVehiculo(laFactoria.crearVehiculos(AUTO, "5678 EEE", 7));
}
void add_camiones(ListaVehiculos & lista)
{
	Factoria laFactoria = Factoria::getInstancia();
	lista.addVehiculo(laFactoria.crearVehiculos(CAMION, "4321 BBB", 20));
	lista.addVehiculo(laFactoria.crearVehiculos(CAMION, "8765 CCC", 15));
}