#include <string>
#include <iostream>

using namespace std;

class Vehiculo {
protected:
	string matricula;
	tipoVehiculo tipo;
	Vehiculo(const string m, tipoVehiculo t) : matricula(m), tipo(t) {}
public:
	tipoVehiculo getTipo() { return tipo; }
	const char * getMatricula() { return matricula.c_str(); }
	friend ostream& operator<<(ostream& os, Vehiculo * p) {
		return os << "Matricula: " << p->getMatricula() << endl;
	}
	virtual void imprime() { cout << "Matricula: " << getMatricula() << endl; }
};

class Automovil : public Vehiculo {
	friend class Factoria;
	unsigned numMaxPasajeros;
	Automovil(const string m, const unsigned p): Vehiculo(m, AUTO), numMaxPasajeros(p) {}
public:
	unsigned getNumMaxPasajeros() { return numMaxPasajeros; }
	friend ostream& operator<<(ostream& os, Automovil * p) {
		return os << (Vehiculo *)p
			<< "Camion con maximo de toneladas: " << p->getToneladas() << endl;
	}
	virtual void imprime() {
		Vehiculo::imprime();
		cout << "Auto con numero maximo pasajeros: " << numMaxPasajeros << endl;
	}
};
class Camion : public Vehiculo {
	friend class Factoria;
	unsigned maxTonelaje;
	Camion(const string m, const unsigned t) :Vehiculo(m, CAMION), maxTonelaje(t) {}
public:
	unsigned getToneladas() { return maxTonelaje; }
	friend ostream& operator<<(ostream& os, Camion * p) {
		return os << (Vehiculo *)p
			<< "Camion con maximo de toneladas: " << p->getToneladas() << endl;
	}
	virtual void imprime() {
		Vehiculo::imprime();
		cout << "Camion con maximo de toneladas: " << maxTonelaje << endl;
	}
};
class ListaVehiculos {
	vector<Vehiculo *> laLista;
public:
	void addVehiculo(Vehiculo *v) { laLista.push_back(v); }
	Vehiculo * getVehiculo(unsigned i) { return laLista[i]; }
	unsigned size() { return laLista.size(); }
	void imprime(unsigned i) {
		/*if(laLista[i]->getTipo()==AUTO)
		cout<< (Automovil *)laLista[i] ;
		else
		cout<< (Camion *)laLista[i] ;*/
		laLista[i]->imprime();
	}
	~ListaVehiculos() { for (unsigned i = 0; i<laLista.size(); i++) delete laLista[i]; }
};
class Factoria
{
	Factoria() {}
public:
	static Factoria& getInstancia() {
		static Factoria unicaInstancia;
		return unicaInstancia;
	}
	Vehiculo* crearVehiculos(tipoVehiculo tipo, const string matricula, const unsigned p)
	{
		if (tipo == AUTO) return new Automovil(matricula, p);
		else if (tipo == CAMION) return new Camion(matricula, p);
		else return NULL;
	}
};