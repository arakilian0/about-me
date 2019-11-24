#include <iostream>
#include <string>

#include "os.h"
#include "fact.h"

using namespace std;

int main()
{
  string OS = os();
  string FACT = fact();

  cout << FACT << endl;
  return 0;
}
