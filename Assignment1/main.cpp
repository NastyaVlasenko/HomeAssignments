/*Vlasenko Anastasiya Igorevna    st128044@student.spbu.ru    Test1*/

#include <iostream>
#include "hello.h"
#include <string>

using namespace std;

int main() {
	string name;
	hello();
	cout<<"World!"<<endl;
	while (true) {
		getline(cin, name);
		if (name == "close") {break;}
		hello();
		cout<<name<<"!"<<endl;
	}
	return 0;
}
