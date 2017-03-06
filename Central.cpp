#include "Central.hpp"



Central::Central(){};
Central& Central::CreateInstance_Central()
{
  static Central SYSTEM;
  return SYSTEM;
}


