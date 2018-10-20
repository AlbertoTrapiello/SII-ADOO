#include "stdafx.h"
#include "Figura.h"
#include "Circulo.h"
#include "Rectangulo.h"

Figura * Figura::Factoria(TipoFigura t, float par1, float par2)
{
	switch (t)
	{
	case CIRCULO:
	{
		return new Circulo(par1);
		break;
	}
	case RECTANGULO:
	{
		return new Rectangulo(par1, par2);
		break;
	}
	}
}
