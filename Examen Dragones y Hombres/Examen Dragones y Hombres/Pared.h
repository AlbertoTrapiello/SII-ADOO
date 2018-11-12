#ifndef  _PARED_
#define _PARED_

class  IObstaculo
{
protected:
	float x, y;
	float vx, vy;
public:
	virtual void mover() = 0;
	virtual void dibuja() = 0;
};

#endif //!_PARED_