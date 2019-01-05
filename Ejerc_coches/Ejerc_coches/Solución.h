#pragma once
#include <iostream>

using namespace std;

class Vehicle
{

};

class Family
{
	Vehicle *car;
public:
	void driveVehicle()
	{
		cout << "Driving a " << endl;
	}
public:
	Family()	{}
	void display()
	{
		cout << "I am a ";
	}
	void setVehicle (Vehicle * c) { car = c; }
	void driveVehicle() { car->driveVehicle(); }
};

