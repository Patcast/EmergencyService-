#ifndef SENSOR_H
#define SENSOR_H
#include <string>
#include <vector>
#include <memory>
#include <utility>
#include "emergencyservice.h"
#include "component.h"


class Sensor : public Component
{
    public :
    Sensor(std::string_view des, std::string_view v);
    int castingErrorAsComponent();
    int addNewService(std::unique_ptr<EmergencyService> newChild);
    int removeServiceByIndex(unsigned int index);

    void printInfo() const override;
    int addNewComponent(std::shared_ptr<Component> newChild) override;
    int removeComponent(std::shared_ptr<Component> unWantedChild) override;
    int testSensor() override;
    int activateSensor() override;
    int deActivateSensor() override;
    int getChildren(std::vector<std::shared_ptr<Component>> &sensors) const override;
    Sensor& operator++(); //prefix
    Sensor& operator--(); //prefix
    Sensor& operator<<(Sensor &s); //prefix
    void setLocation(const std::string_view &newLocation) override;
    const std::string & getLocation() const override;

private:
    bool isActive{false};
    std::string vendor;
    std::string location;
    std::vector<std::unique_ptr<EmergencyService>> services;
};

#endif // SENSOR_H
