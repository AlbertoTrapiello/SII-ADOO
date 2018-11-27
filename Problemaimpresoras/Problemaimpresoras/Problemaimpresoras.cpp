// Problemaimpresoras.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "miscelanea.h"
#include <iostream>

using namespace std;

int main()
{
	char fichero[255], nombre_impresora[255];
	cout << "Introduzca en nombre de fichero: "; cin >> fichero;
	cout << "Introduzca nombre impresora: HP o EPSON: "; cin >> nombre_impresora;
	Impresora* impresora = NULL;
	//AQUÍ COMPLETAR CODIGO DE CREACION DE LA IMPRESORA ADECUADA
	IFactoria * pFac = new FactoriaImpresora;
	impresora = pFac->crearImpresora(nombre_impresora);
	// en funcion de "nombre_impresora"
	if (impresora == NULL)
	{
		cout << "Impresora no existe" << endl;
		return -1;
	}
	if (impresora->Imprime(fichero))
		cout << "Impresion correcta" << endl;
	else
		cout << "Impresion fallida" << endl;
	return 0;
}
