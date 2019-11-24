#include <string>

std::string os ()
{
  std::string platform;

  // mac ?
  #if defined (__APPLE__)
  {
    platform = "darwin";
    return platform;
  }
  #endif

  // linux ?
  #if defined (__linux__)
  {
    platform = "linux";
    return platform;
  }
  #endif

  // windows 32-bit ?
  #if defined (__WIN32)
  {
    platform = "win32";
    return platform;
  }
  #endif

  // windows 64-bit ?
  #if defined (__WIN64)
  {
    platform = "win64";
    return platform;
  }
  #endif
}
