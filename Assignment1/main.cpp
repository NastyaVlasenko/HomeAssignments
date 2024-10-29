/*Vlasenko Anastasiya Igorevna    st128044@student.spbu.ru    Test1*/

#include <iostream>
#include "hello.h"
#include <string>

int main() {
	std::string name;
	hello();
	std::cout<<"World!"<<std::endl;
        std::cout<<"Print *close* to exit"<<std::endl;
	while (true) {
		getline(std::cin, name);
		if (name == "close") {break;}
		hello();
		std::cout<<name<<"!"<<std::endl;
	}
	return 0;
}
