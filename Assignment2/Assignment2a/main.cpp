/*Vlasenko Anastasia Igorevna 128044@student.spbu.ru Assignment2a*/
#include "main.h"
int main()
{
	std::ifstream infile;
	infile.open("source1",std::ios::binary|std::ios::in);

	int siz=std::filesystem::file_size("source1");
	std::cout<<siz<<std::endl;

	char* buffer = new char[siz];

	infile.read(buffer, siz);

	char* rvbuffer = new char[siz];

	for (int i = 0; i < siz; ++i)
	{
		rvbuffer[i] = buffer[siz - i - 1];
	}

	std::ofstream outfile;
	outfile.open("result1",std::ios::binary|std::ios::out);
	outfile.write(rvbuffer, siz);

	infile.close();
	outfile.close();

	delete [] buffer;
	delete [] rvbuffer;
}
