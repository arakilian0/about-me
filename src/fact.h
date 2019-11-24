#include <cstdlib>
#include <ctime>
#include "fta.h"

using namespace std;

string fact (int idx = -1) {
  array<string, MAX_FACTS> FactArray = FileToArray("facts.txt");
	int RandomNumber, oidx;

	if(idx > -1 && idx <= MAX_FACTS - 1) {
		oidx = idx;
	}
	else {
		srand((unsigned) time(0));
		RandomNumber = rand() % 100;
		oidx = RandomNumber;
	}

	return FactArray[oidx];
}
