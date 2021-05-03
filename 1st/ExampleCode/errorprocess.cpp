#include <cassert>
#include <fstream>
#include <iostream>

using namespace std;

//assert example
double sqaure_root(double x)
{
	double result = 0.0;
	//blabla
	assert(result >= 0.0);

	return result;
}

struct cannot_open_file {};

void read_matrix_file(string fname)
{
	//throw
	{
		std::fstream f(fname);

		if (!f.is_open())
			throw cannot_open_file{};
	}


}

void try_catch_test()
{
	string fname;
	cout << "Please enter the file name: ";
	cin >> fname;

	try {
		read_matrix_file(fname);
	}
	catch (cannot_open_file& e)
	{
		cout << "Could not open file. Try another one!\n";
	}
	catch (...)	// process all exceptions.
	{
		cout << "Something is fishy here. Try another file!\n";
	}
}