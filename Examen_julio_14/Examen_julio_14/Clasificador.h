#pragma once

class Muestra
{

};

class BaseEntrenamiento
{

};

class Clasificador
{
public:
	virtual int getEtiqueta(const Muestra &) = 0;
};

class kVecinos : public Clasificador //podr�a ser m�ltiples m�todos Bayes/LDA/SVM
{
	BaseEntrenamiento *pBaseEntrenamiento;
	friend class Factoria;
	kVecinos (BaseEntrenamiento *p): pBaseEntrenamiento(p) {}
public:
	int getEtiqueta (const Muestra & muestra_etiquetar)
	{
		//Esto es el Alto Riesgo, c�mo hacer que sea capaz de calcular a qu� Etiquet pertenece cada una 
	}
};