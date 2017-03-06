#include "sensor_move.hpp"
#include <vector>

#ifndef SENSOR_CREATE
#define SENSOR_CREATE 

class Sensor_create
{
  protected:
    std::vector<Sensor_Move*> All_Sensors;
  public:
    Sensor_create();
    virtual ~Sensor_create();
    virtual Sensor_Move* setInstance(std::string Name_c,
                                          std::string Maker_c,
                                          uint16_t    Nr_ref_c,
                                          uint16_t    Range_max_c,
                                          uint16_t    Range_min_c);
    virtual void RemoveInstance(const uint16_t& nr_instance);
};

#endif
