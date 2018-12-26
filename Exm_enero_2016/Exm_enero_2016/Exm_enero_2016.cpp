// Exm_enero_2016.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include "Vector.h"

using namespace std;
class IVector {};
class VectorSTD {};
void showVector(IVector &elVector) {
	for (int i = 0; i<elVector.getDim(); i++)
		cout << elVector.getCoef(i) << endl;
}
int main() {
	float vector[] = { 1.0f,2.0f,3.0f };
	VectorSTD miVector(3, vector);
	showVector(miVector);//smartcast, showVector es capaz de tragarse mivector
	return 0;
}
