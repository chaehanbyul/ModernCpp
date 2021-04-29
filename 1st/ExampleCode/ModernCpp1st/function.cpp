#include <iostream>
#include <cmath>

using namespace std;

//Function overloading
int divide(int a, int b)
{
	return a / b;
}

float divide(float a, float b)
{
	return a / b;
}

void test()
{
	int x = 5, y = 2;
	float n = 5.0, m = 2.0;

	divide(x, y);
	divide(n, m);
	divide(x, m);	//build Error!!
}