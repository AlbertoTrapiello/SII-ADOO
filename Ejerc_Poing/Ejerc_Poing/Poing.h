#pragma once
#include <string>
#include <iostream>
using namespace std;

class Poingable
{

};

class Bingable
{

};

class Outer
{
	string name;
	class Inner1;
	friend class Outer::Inner1;
	class Inner1: public Poingable
	{
		Outer *parent;
		Inner1(Outer * p): parent(p) {}
	public:
		void poing()
		{
			cout << "poing called for " << parent->name << endl;
		}
	}theInner1;
	class Inner1;
	friend class Outer::Inner1;
	class Inner1 : public Bingable
	{
		Outer *parent;
		Inner1(Outer * p) : parent(p) {}
	public:
		void bing()
		{
			cout << "bing called for " << parent->name << endl;
		}
	}theInner2;
	Outer(const char * p) : name(p), theInner1(this), theInner2(this) {}
	operator Poingable & () { return theInner1; }
	operator Bingable & () { return theInner2; }
};
