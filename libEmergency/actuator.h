#ifndef ACTUATOR_H
#define ACTUATOR_H

#include <emergencyservice.h>
#include <string>

class Actuator : public EmergencyService
{
public:
    Actuator(std::string name);

    using EmergencyService::execute;
    void execute();
};

#endif // ACTUATOR_H
