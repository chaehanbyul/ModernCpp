
#include <iostream>
#include <cassert>
#include <math.h>

using namespace std;

double squre_root(double x)
{
	double result = 0.0;

	result = sqrt(x);
	
	assert(result >= 0.0);

	return result;
}

int main()
{
	return 0;
}

