// Ejerc_coches.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"

#include <iostream>
int main()
{
	Family *fam = new Father();
	fam->display();
	fam->setVehicle(new Ford());
	fam->driveVehicle();
	fam = new Daughter();
	fam->display();
	fam->setVehicle(new Honda());
	fam->driveVehicle();
	return 0;
}
//////////////////////////////////
Ejecución del programa
//////////////////////////////////
I am Father
Driving Ford
I am Daughter
Riding Honda
