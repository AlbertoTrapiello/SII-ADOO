// Tornillo_Tuerca.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "IFactoria.h"
#include <iostream>
#include <stdlib.h>

int main()
{
	IFactoria *pFactoriaTornillos = new FactoriaTornillos;
	IFactoria *pFactoriaTuercas = new FactoriaTuercas;
	std::cout << "Simulacion de sacar tornillo y tuerca de forma aleatoria" << std::endl;
	std::cout << "La bolsa contiene tornillos y tuercas DIN84 y DIN316" << std::endl;
	std::cout << "Pulsar c o C para sacar tornillo y tuerca" << std::endl;
	char opcion; std::cin >> opcion;
	while (opcion == 'c' || opcion == 'C') {
		ITornillo *pTornillo =
			pFactoriaTornillos->fabricacionTornillo(rand() % 2 == 1 ? DIN84 : DIN316);
		ITuerca *pTuerca =
			pFactoriaTuercas->fabricacionTuerca(rand() % 2 == 1 ? DIN84 : DIN316);
		if (pTornillo->getMetrica() == pTuerca->getMetrica()) {
			char *mensaje = pTuerca->getMetrica() == DIN84 ? "DIN84" : "DIN316";
			std::cout << "Ensamblaje correcto: metrica " << mensaje << std::endl;
		}
		else
			std::cout << "Ensamblaje incorrecto" << std::endl;
		std::cout << "Pulsar c o C para sacar tornillo y tuerca" << std::endl;
		std::cin >> opcion;
		delete pTornillo, pTuerca;
	}
	delete pFactoriaTornillos, pFactoriaTuercas;
	return 0;
}