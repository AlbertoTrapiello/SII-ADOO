#pragma once
#include <string>

class Impresora; //para evitar meter el include y tener un doble lazo de dependencia, dado que IFactoria debe conocer a la clase Impresora

class IFactoria
{
public:
	virtual Impresora * crearImpresora(const char *) = 0;

};

class Impresora
{
public:
	virtual bool Imprime(const char *) = 0;
};

class FactoriaImpresora : public IFactoria
{
public:
	Impresora * crearImpresora(const char * nombre_impresora)
	{
		if (!strcmp(nombre_impresora, "Epson")) return new AdaptadorEpson;
		if (!strcmp(nombre_impresora, "HP")) return new AdaptadorHP;
		return NULL;
	}
};

class HPControladorImpresora
{

};

class AdaptadorEpson :public Impresora
{

};

class AdaptadorHP :public Impresora
{
	friend class FactoriaImpresora;
	AdaptadorHP() {}
	HPControladorImpresora driver;
public:
	bool Imprime(const char * pFichero)
	{
		return (driver.ImprimeFichero(pFichero) == 1? true : false );
	}
}; 