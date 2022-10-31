#include "callauthority.h"

CallAuthority::CallAuthority(std::string name, std::string contact) : EmergencyService(name) {
    this->setMessage("Contacted " + name + " @ " + contact);
}
