// Ejercicio_Examen_Sueldos_IRPF.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"

int main() {
	Nomina nomina;
	int opcion;
	cout << "1. Nomina ordinaria" << endl;
	cout << "2. Nomina con bonus" << endl;
	cin >> opcion;
	nomina.setOpcion(opcion);
	cout << "IRPF en %: ";
	float IRPF;
	cin >> IRPF;
	nomina.setIRPF(IRPF);
	cout << "Salario base: ";
	float salario;
	cin >> salario;
	nomina.setSalarioBase(salario);
	float total = nomina.getSueldoNeto();
	cout << "El salario neto es: “
		<< total << endl;
	return 0;
}