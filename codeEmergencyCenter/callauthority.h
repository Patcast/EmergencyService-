#ifndef CALLAUTHORITY_H
#define CALLAUTHORITY_H

#include <emergencyservices.h>
#include <string>

class CallAuthority : public EmergencyServices
{
public:
    CallAuthority(std::string name, std::string contact);

    using EmergencyServices::execute;
    void execute();
};

#endif // CALLAUTHORITY_H
