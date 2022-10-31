#ifndef EMERGENCYSERVICE_H
#define EMERGENCYSERVICE_H
#include <string>


class EmergencyService
{
protected:
    EmergencyService(std::string n, std::string o);
    int id;
    std::string name;
    std::string output;

public:
    virtual void execute() const = 0;

};

#endif // EMERGENCYSERVICE_H
