#include "Sensor_create.hpp"


Sensor_create::Sensor_create(){};
Sensor_create::~Sensor_create(){};
Sensor_Move* Sensor_create::setInstance(
                                   std::string Name_c,
                                   std::string Maker_c,
                                   uint16_t Nr_ref_c,
                                   uint16_t Range_max_c,
                                   uint16_t Range_min_c)
{
    All_Sensors.push_back(new Sensor_Move(Name_c,
                                          Maker_c,
                                          Nr_ref_c,
                                          Range_max_c,
                                          Range_min_c));
    return (All_Sensors[All_Sensors.size()-1]);
}

void Sensor_create::RemoveInstance(const uint16_t& nr_instance)
{
  All_Sensors.erase(All_Sensors.begin() + nr_instance);
}

