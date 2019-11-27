#include <fstream>
#include <string>
#include <array>
#define MAX_FACTS 100

using namespace std;

array< string, MAX_FACTS > FileToArray(string ifile) {
  array<string, MAX_FACTS> FactArray;
  ifstream facts(ifile);
  string Fact, RandomFact;
  unsigned int FactArrayLength = 0;

  while(getline(facts, Fact)) {
		if (FactArrayLength < MAX_FACTS) { FactArray[FactArrayLength++] = Fact; }
  }

  return FactArray;
}
