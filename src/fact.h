#include <iostream>
#include <string>
#include <array>
#include <cstdlib>
#include <ctime>

#include "fta.h"

using namespace std;

string fact () {
  array<string, MAX_FACTS> FactArray = FileToArray("facts.txt");
  srand((unsigned) time(0));
  int RandomNumber = rand() % 100;

  // cout << RandomNumber << endl;
  return FactArray[RandomNumber];
}
