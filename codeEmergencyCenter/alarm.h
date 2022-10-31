#ifndef ALARM_H
#define ALARM_H

#include <emergencyservice.h>
#include <string>

class Alarm : public EmergencyServices
{
public:
    Alarm(std::string name);

    using EmergencyServices::execute;
    void execute();
};

#endif // ALARM_H
