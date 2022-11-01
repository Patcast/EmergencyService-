#ifndef ALARM_H
#define ALARM_H

#include <emergencyservice.h>
#include <string>

class Alarm : public EmergencyService
{
public:
    Alarm(std::string name);

    using EmergencyService::execute;
    void execute();
};

#endif // ALARM_H
