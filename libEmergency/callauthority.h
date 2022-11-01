#ifndef CALLAUTHORITY_H
#define CALLAUTHORITY_H

#include <emergencyservice.h>
#include <string>

class CallAuthority : public EmergencyService
{
public:
    CallAuthority(std::string name, std::string contact);

    using EmergencyService::execute;
    void execute();
};

#endif // CALLAUTHORITY_H
