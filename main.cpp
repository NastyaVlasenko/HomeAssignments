#include <iostream>
#include "header.h"
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
