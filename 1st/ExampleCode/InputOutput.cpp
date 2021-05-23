#include <iostream>
#include <fstream>
#include <sstream>

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


int main()
{
	//ostream 레퍼런스를 인수로 사용
	std::ofstream myfile("example.txt");
	std::stringstream mystream;

	write_something(std::cout);
	write_something(myfile);
	write_something(mystream);

	std::cout << "mystream is: " << mystream.str();	//개행을 포함하고 있다.

	return 0;
}