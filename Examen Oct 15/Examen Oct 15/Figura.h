#ifndef _FIGURA_
#define _FIGURA_


typedef enum {CIRCULO, RECTANGULO} TipoFigura;

class Figura
{
protected:
	float area;
	TipoFigura elTipo;
	Figura (TipoFigura t, float a): elTipo(t), area(a) {}
public:
	static Figura * Factoria(TipoFigura t, float par1, float par2 = 0);
	virtual void list() = 0;//como no hay nada en común entre la figuras la pono abstracta. Si no solo virtual
	float getarea(void) { return area; }
};

#endif // !_FIGURA_