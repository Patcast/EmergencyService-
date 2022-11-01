#include "motion.h"

Motion::Motion(int id, std::string_view description, std::string_view vendor, int motionThreshold, int range, int startTime, int endTime) : Sensor(id, description, vendor) {
    this->motionThreshold = motionThreshold;
    this->range = range;
    this->startTime = startTime;
    this->endTime = endTime;
}

bool Motion::isWithinTime(int time) {
    return (time >= this->startTime && time < this->endTime);
}
