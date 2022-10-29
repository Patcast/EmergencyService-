#ifndef SENSOR_H
#define SENSOR_H
#include <string>
#include <vector>
#include <memory>


class Sensor : public Component
{
using Component::Component
public:
    Sensor(unsigned int id, std::string_view description, Observer* myObs);
    int activateSensor();
    int deActivateSensor();
    int testSensor();
    int addService(std::unique_ptr<EmergencyService> newService);
    int removeSeviceByIndex(unsigned int index);
    const std::string_view getServiceDescriptionByIndex(unsigned int index);
    int suscribe(Observer* newObserver);
    int unSuscribe();
    int notifyOBserver();
    int addComponent(std::unique_ptr<Component> newComponent);
    int removeComponent(std::unique_ptr<Component> newComponent);

private:
    std::string vendor{"NA"};
    bool isActive {false};
    std::vector<std::unique_ptr<EmergencyService>> emergencyServices;
    Observer* myObserver;
};

#endif // SENSOR_H
