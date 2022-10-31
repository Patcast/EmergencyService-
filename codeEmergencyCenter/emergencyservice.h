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
    void execute();

};

#endif // EMERGENCYSERVICE_H
