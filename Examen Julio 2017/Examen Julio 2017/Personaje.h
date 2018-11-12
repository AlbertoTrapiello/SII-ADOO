#ifndef _PERSONAJE_
#define _PERSONAJE_



class Personaje
{
protected:
	float saldo;
	Personaje * Interlocutor;
public:
	Personaje(float c): saldo (c) {}
	void Conecta(Personaje *p)
	{
		Interlocutor = p; // para que los personajes del futuro se puedan conectar entre ellos sin conocerse, pueden interaccionar mediante la superclase común
	}
	virtual void Recibe(float c)//como el Jugador recibe así no necesita Recibe pero el Cajero al hacerlo distinto necesita que sea virtual
	{
		saldo += c;
	}
};

#endif // !