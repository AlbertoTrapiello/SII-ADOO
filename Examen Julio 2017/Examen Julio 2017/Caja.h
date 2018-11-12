#ifndef _CAJA_
#define _CAJA_


class Caja
{
protected:
	float saldo;
public:
	Caja(float c): saldo(c) {}
	void Ingresa(float c)
	{
		saldo += c;
	}
	float Saca(float c)
	{
		saldo -= 0.05*c;
		return 0.05*c;
	}
};

#endif // !