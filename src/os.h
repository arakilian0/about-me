#include <string>

using namespace std;

string os () {
  string platform;

  #if defined (__APPLE__)
  {
    platform = "darwin";
    return platform;
  }
  #endif

  #if defined (__linux__)
  {
    platform = "linux";
    return platform;
  }
  #endif

  #if defined (__WIN32)
  {
    platform = "win32";
    return platform;
  }
  #endif

  #if defined (__WIN64)
  {
    platform = "win64";
    return platform;
  }
  #endif
}
