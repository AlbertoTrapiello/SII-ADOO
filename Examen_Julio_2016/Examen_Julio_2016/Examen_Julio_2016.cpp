// Examen_Julio_2016.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class GlobalClass 
{
	float value;
	GlobalClass(float v = 0): value(v) {}
public:
	static GlobalClass * instance()
	{
		static GlobalClass Singleton;
		return &Singleton;
	}
	void set_value(float v) 
	{
		value = v;
	}
	float get_value()
	{
		return value;
	}
};

void foo(void) {
	GlobalClass::instance()->set_value(1);
	cout << "foo: global_ptr is "
		<< GlobalClass::instance()->get_value()
		<< '\n';
}
void bar(void) {
	GlobalClass::instance()->set_value(2);
	cout << "bar: global_ptr is "
		<< GlobalClass::instance()->get_value()
		<< '\n';
}
int main() {
	cout << "main: global_ptr is "
		<< GlobalClass::instance()->get_value()
		<< '\n';
	foo();
	bar();
	return 0;
}
