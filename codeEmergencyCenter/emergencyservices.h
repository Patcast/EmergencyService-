#ifndef EMERGENCYSERVICES_H
#define EMERGENCYSERVICES_H
#include <string>


class EmergencyServices
{
protected:
    EmergencyServices(std::string n, std::string o);
    int id;
    std::string name;
    std::string output;

public:
    virtual void execute() const = 0;

};

#endif // EMERGENCYSERVICES_H
// Test Feature
