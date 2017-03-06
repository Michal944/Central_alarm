#include "sensor_move.hpp"
#include <vector>


Sensor_Move::Sensor_Move(std::string Name_c,
                         std::string Maker_c,
                         uint16_t    Nr_ref_c,
                         uint16_t    Range_max_c,
                         uint16_t    Range_min_c = 0)
: Name_sensor(Name_c),
  Maker(Maker_c),
  Nr_ref(Nr_ref_c),
  Range_min(Range_min_c),
  Range_max(Range_max_c)
{
  Detection = 0;
}

Sensor_Move::~Sensor_Move(){};
void Sensor_Move::setDetection(const BOOL& Detect_arg)
{
  Detection = Detect_arg;
}

BOOL Sensor_Move::getDetection()
{
  return Detection;
}

void Sensor_Move::setRange(const uint16_t& Range_min_arg,
                           const uint16_t& Range_max_arg)
{
  Range_min = Range_min_arg;
  Range_max = Range_max_arg;
}


