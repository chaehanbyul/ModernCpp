#include <iostream>
#include <fstream>
#include <sstream>

//Wirte File
void write_squares_fille()
{
	//���� ���
	/*std::ofstream square_file;
	square_file.open("squares.txt");*/

	std::ofstream square_file("squares.txt");

	for (int i = 0; i < 10; i++)
	{
		square_file << i << "^2 = " << i * i << std::endl;
	}

	square_file.close();
}

//ostream�� ���۷����� �μ��� ����Ͽ� ��� ������ ��� ��Ʈ���� ���
void write_something(std::ostream& os)
{
	os << "Hi stream, did you know that 3 * 3 = " << 3 * 3 << std::endl;
}


int main()
{
	//ostream ���۷����� �μ��� ���
	std::ofstream myfile("example.txt");
	std::stringstream mystream;

	write_something(std::cout);
	write_something(myfile);
	write_something(mystream);

	std::cout << "mystream is: " << mystream.str();	//������ �����ϰ� �ִ�.

	return 0;
}