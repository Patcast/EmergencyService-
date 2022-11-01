#ifndef SENSOR_H
#define SENSOR_H
#include <string>
#include <vector>
#include <memory>
#include "component.h"
#include "emergencyservice.h"

class Sensor : public Component
{
    using Component::Component;
    public : Sensor(int Id, std::string_view des, std::string_view v);
    int activateSensor() override;
    int deActivateSensor() override;
    void printInfo() const;
    int castingErrorAsComponent();
    int addNewService(std::unique_ptr<EmergencyService> newChild);
    int removeServiceByIndex(unsigned int index);
    int testSensor() override;
    std::shared_ptr<Component> const getChildren() const override;
    int addNewComponent(std::shared_ptr<Component> newChild) override;
    int removeComponent(std::shared_ptr<Component> unWantedChild) override;

private:
    bool isActive{false};
    std::string_view vendor;
    std::vector<std::unique_ptr<EmergencyService>> services;
};

#endif // SENSOR_H
