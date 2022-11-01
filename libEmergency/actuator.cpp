#include "actuator.h"
#include <string>

Actuator::Actuator(std::string name) : EmergencyService(name) {
    this->setMessage(name + " is being actuated");
}
