#include "motion.h"

Motion::Motion(int motionThreshold, int range, int startTime, int endTime) : Sensor() {
    this->motionThreshold = motionThreshold;
    this->range = range;
    this->startTime = startTime;
    this->endTime = endTime;
}

bool Motion::isWithinTime(int time) {
    return (time >= this->startTime && time < this->endTime);
}
