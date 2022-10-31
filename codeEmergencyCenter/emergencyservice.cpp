#include "emergencyservice.h"
#include <string>

EmergencyService::EmergencyService(std::string n, std::string m) {
    this->name = n;
    this->message = m;
}

void EmergencyService:: setMessage(std::string m) {
    this->message = m;
}
