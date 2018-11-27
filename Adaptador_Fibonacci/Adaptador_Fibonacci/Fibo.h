#pragma once
#include <vector>

using namespace std;

class FibonacciGenerator
{
	int n;
	int val[2];
public:
	FibonacciGenerator() : n(0) { val[0] = val[1] = 1; }
	int operator()() {
		int result = n > 2 ? val[0] + val[1] : 1;
		++n;
		val[0] = val[1];
		val[1] = result;
		return result;
	}
	int count() { return n; }
};
};

class IAdpatadorFibonacci
{
public:
	virtual vector<unsigned> & getSerie() = 0;
	static IAdpatadorFibonacci *factoriaFibonacci(int);
};

class AdaptadorFibonacci : public IAdpatadorFibonacci
{
	vector <unsigned> serie;
	FibonacciGenerator generador;
	friend class IAdaptadorFibonacci;
	AdaptadorFibonacci(unsigned int n)
	{
		for (int i = 0; i < n; i++)
			serie.push_back(generador());
	}
public:
	vector <unsigned> & getSerie() { return serie; }
};
