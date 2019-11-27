#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;

int CharToInt(char ichar[]) {
	int ochar = 0;

	try { ochar = stoi(ichar); }
	catch (invalid_argument&) {
		cout << "Warning: invalid argument(s) given to CharToInt() - char type only." << endl;
		exit(0);
	}

	return ochar;
}
