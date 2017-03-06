#ifndef SENSOR_MOVE_HPP
#define SENSOR_MOVE_HPP

#include <iostream>
#include <stdint.h>

typedef uint16_t BOOL;

class Sensor_Move
{
  private:
    std::string   Name_sensor;
    std::string   Maker;
    uint16_t      Nr_ref;
    uint16_t      Range_min; //Minimal distance of moving item
    uint16_t      Range_max; //Maximum distance
    BOOL          Detection;
  public:
    Sensor_Move(std::string Name_c,
                std::string Maker_c,
                uint16_t    Nr_ref_c,
                uint16_t    Range_max_c,
                uint16_t    Range_min_c);

    virtual ~Sensor_Move();
    virtual void setDetection(const BOOL& Detect_arg);
    virtual BOOL getDetection();
    virtual void setRange(const uint16_t& Range_min_arg,
                          const uint16_t& Range_max_arg);
};


#endif
