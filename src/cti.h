#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;

int CharToInt(char ichar[]) {
	int ochar = 0;

	try {
		ochar = stoi(ichar);
	}
	catch (invalid_argument&) {
		cout << "Input a number between 0-99 to pick a fact by index." << endl;
		exit(0);
	}

	return ochar;
}
