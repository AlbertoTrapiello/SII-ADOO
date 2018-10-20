#ifndef _RECTANGULO_
#define _RECTANGULO_

#include "Figura.h"

class Rectangulo : public Figura
{
protected:
	float a, b;
private:
	Rectangulo(float pa, float pb): a(pa), b(pb), Figura::Figura(RECTANGULO, pa*pb) {}
	friend class Figura;
public:
	void list()
	{
		cout << "Rectangulo de ancho " << a << " y de alto " << 2 << endl;
	}
};

#endif // !_RECTANGULO_