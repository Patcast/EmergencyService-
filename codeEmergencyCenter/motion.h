#ifndef MOTION_H
#define MOTION_H

#include "sensor.h"

class Motion : public Sensor
{
public:
    Motion(int motionThreshold, int range, int startTime = 0, int endTime = 24);
    int motionThreshold;
    int range;
    int startTime;
    int endTime;
    bool isWithinTime(int time);
};

#endif // MOTION_H
