#ifndef GAS_H
#define GAS_H

#include "sensor.h"

class Gas : public Sensor
{
public:
    using Sensor::Sensor;
    Gas(std::string_view des, std::string_view v, int gasThreshold);
    int gasThreshold;
};

#endif // GAS_H
