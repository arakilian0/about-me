#include "cti.h"
#include "fact.h"

using namespace std;

int main(int argc, char** argv) {
	int i, index;

	if(argc == 1 || argc >= 3) {
		cout << fact() << endl;
	}
	else {
		for (i = 0; i < argc; i++) {
			if (i == 1) {
				index = CharToInt(argv[i]);
				cout << fact(index) << endl;
			}
		}
	}

	return 0;
}
