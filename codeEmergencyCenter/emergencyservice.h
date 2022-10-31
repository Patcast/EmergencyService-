#ifndef EMERGENCYSERVICE_H
#define EMERGENCYSERVICE_H
#include <string>


class EmergencyService
{
protected:
    EmergencyService(std::string name, std::string message = "Unspecified message");
    std::string name;
    std::string message;
    void setMessage(std::string message);

public:
    virtual void execute() const = 0;

};

#endif // EMERGENCYSERVICE_H
