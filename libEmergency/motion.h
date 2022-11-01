#ifndef MOTION_H
#define MOTION_H

#include "sensor.h"

class Motion : public Sensor
{
public:
    using Sensor::Sensor;
    Motion(int Id, std::string_view des, std::string_view v, int motionThreshold, int range, int startTime = 0, int endTime = 24);
    int motionThreshold;
    int range;
    int startTime;
    int endTime;
    bool isWithinTime(int time);
};

#endif // MOTION_H
