
#include <iostream>
#include <cassert>
#include <math.h>

using namespace std;

//for example
void forsentense()
{
	double x = 2.0, xn = 1.0, exp_x = 1.0;

	unsigned long fac = 1;

	for (unsigned long n = 1; n <= 10; ++n)
	{
		xn *= x;
		fac *= n;
		exp_x += xn / fac;
		cout << "e^x is " << exp_x << '\n';
	}

	//c++11 style
	int primes[] = { 2, 3, 5, 7, 11, 13, 17, 19 };

	for (int i : primes)
		cout << i << " ";
}

double squre_root(double x)
{
	double result = 0.0;

	result = sqrt(x);
	
	assert(result >= 0.0);

	return result;
}

int main()
{
	forsentense();

	return 0;
}

