#ifndef _MOL_AGUA
#define _MOL_AGUA

 // 


#include "Atomo.h"

class MoleculaAgua
{
protected:
	Atomo oxigeno, hidrogeno1, hidrogeno2;
public:
	MoleculaAgua():  oxigeno(16), hidrogeno1(1), hidrogeno2(1) 
	{
		hidrogeno1.Enlaza(&oxigeno);
		hidrogeno2.Enlaza(&oxigeno);
	}
	void CalcularPosicion()
	{
		oxigeno.CalcularPosicion();
		hidrogeno1.CalcularPosicion();
		hidrogeno2.CalcularPosicion();
	}
	void Dibuja()
	{
		oxigeno.Dibuja();
		hidrogeno1.Dibuja();
		hidrogeno2.Dibuja();
	}
};
#endif