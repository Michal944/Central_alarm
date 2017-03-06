#include "Sensor_create.hpp"
#ifndef CENTRAL_HPP
#define CENTRAL_HPP

class Central : public virtual Sensor_create
{
  private:
   Central();
   Central(const Central&);
   void operator= (const Central&);
  public:
   static Central& CreateInstance_Central();
};

#endif
