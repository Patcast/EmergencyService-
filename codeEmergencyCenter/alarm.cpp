#include "alarm.h"

Alarm::Alarm(std::string name) : EmergencyService(name) {
    this->setMessage("Wie-oe wie-oe (Alarm " + name + " sounds)");
}
