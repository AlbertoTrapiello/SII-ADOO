#pragma once

using namespace std;

class Factoria
{
	Factoria() {}
public:
	static Factoria & getInstancia()//se asegura de que sólo se crea una Factoria mediante el singleton
	{
		static Factoria singleton;
		return singleton;
	}
	Pieza * crearPieza(TipoPieza t, Color c)
	{
		if (t == REY)
			return new Rey(t, color);
		else if (t == PEON)
			return new Peon(t, color);
		else return NULL;
	}
	Tablero * crearTablero(TipoTablero t)
	{
		if (t == MADERA)
			return new TableroMadera(t);
		else return NULL;
	}
};
