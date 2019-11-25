#include "fta.h"
#include "ran.h"

using namespace std;

string fact (int idx = -1) {
  array<string, MAX_FACTS> FactArray = FileToArray("facts.txt");
	int oidx;

	if(idx > -1 && idx <= MAX_FACTS - 1) { oidx = idx }
	else { oidx = RandomNumber() }

	return FactArray[oidx];
}
