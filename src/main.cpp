#include <iostream>
#include <string>

#include "os.h"

int main()
{
  const std::string OS = os();

  std::cout << OS << std::endl;
  return 0;
}
