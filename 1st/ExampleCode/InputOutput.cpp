#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <math.h>
#include <corecrt_math_defines.h>

#define _USE_MATH_DEFINES
using namespace std;

//Wirte File
void write_squares_fille()
{
	//파일 출력
	/*std::ofstream square_file;
	square_file.open("squares.txt");*/

	std::ofstream square_file("squares.txt");

	for (int i = 0; i < 10; i++)
	{
		square_file << i << "^2 = " << i * i << std::endl;
	}

	square_file.close();
}

//ostream의 레퍼런스를 인수로 사용하여 모든 종류의 출력 스트림을 허용
void write_something(std::ostream& os)
{
	os << "Hi stream, did you know that 3 * 3 = " << 3 * 3 << std::endl;
}

void set_format()
{
	double pi = M_PI;
	cout << "pi is " << pi << '\n';	//pi is 3.14159
	cout << "pi is " << setprecision(16) << pi << '\n';	//pi is 3.141592653589793

	cout << "pi is " << setw(30) << pi << '\n';	//pi is              3.141592653589793

	cout << "pi is " << setfill('-') << left << setw(30) << pi << '\n';	//pi is 3.141592653589793-------------

	cout.setf(ios_base::showpos);	//앞으로 양수에도 부호를 표시
	cout << "pi is " << scientific << pi << '\n';	//pi is+3.1415926535897931e+00


	cout << "63 octal is " << oct << 63 << '\n';	//63 octal is 77
	cout << "63 hex is " << hex << 63 << '\n';	//63 hex is 3f
	cout << "63 decimal is " << dec << 63 << '\n';	//63 decimal is + 63

	cout << "pi < 3 is " << (pi < 3) << '\n';	//pi < 3 is +0
	cout << "pi < 3 is " << boolalpha << (pi < 3) << '\n';	//pi < 3 is false

}

int main()
{
	//ostream 레퍼런스를 인수로 사용
	std::ofstream myfile("example.txt");
	std::stringstream mystream;

	write_something(std::cout);
	write_something(myfile);
	write_something(mystream);

	std::cout << "mystream is: " << mystream.str();	//개행을 포함하고 있다.

	myfile.close();

	set_format();

	return 0;
}