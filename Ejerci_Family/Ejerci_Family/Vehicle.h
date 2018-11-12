#ifndef _VEHICLE_
#define _VEHICLE_

#include <iostream>

class Vehicle
{
public:
	virtual void drive() = 0;

};

class Family //Son las interfaces
{
	Vehicle *pVehicle;
public:
	virtual void display() = 0;//porque depende de las clases derivadas
	virtual void setVehicle(Vehicle *p) { pVehicle = p; }
	virtual void driveVehicle() { pVehicle->drive(); }
};

class Ford : public Vehicle
{
public:
	virtual void drive()
	{
		std::cout << "Driving Ford" << std::endl;
	}
};

class Father : public Family
{
public:
	virtual void display()
	{
		std::cout << "I am Father" << std::endl;
	}
};
#endif