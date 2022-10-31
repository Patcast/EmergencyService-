#ifndef GAS_H
#define GAS_H

#include "sensor.h"

class Gas : public Sensor
{
public:
    Gas(int gasThreshold);
    int gasThreshold;
};

#endif // GAS_H
