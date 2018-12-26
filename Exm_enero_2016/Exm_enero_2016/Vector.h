#pragma once
#include <vector>

using namespace std;

class IVector
{
public:
	virtual int getDim() = 0;
	virtual float getCoef(int) = 0;
};

class VectorSTD
{
	vector <float> array;
	class NotificadorVector; //clase interna, el avsas de que la vas a hacer y es de tipo friend
	friend class VectorSTD::NotificadorVector;	//porque la clase interna debe poder trabajar con toda la info, porque es un rol de VectorSTD
	class NotificadorVector : public IVector  //definición dentro de la clase genérica
	{
		VectorSTD *parent;//la clase interna tine a su parent
		NotificadorVector (VectorSTD *pVector): parent(pVector) {}
	public:
		int getDim() { return parent->array.size(); }
		float getCoef(int i) { return parent->array[i]; }
	}elNotificador;//es un instancia de la calse interna

public:
	VectorSTD(int dim, float *v) : elNotificador(this) //para inicializar elNotificador 
	{
		for (int i = 0; i < dim; i++)
			array.push_back(*(v + i));
	}
	operator IVector& () { return elNotificador; } //necesito devolver uno de sus roles
};


