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
    int castingErrorAsComponent();
    int addNewService(std::unique_ptr<EmergencyService> newChild);
    int removeServiceByIndex(unsigned int index);

    void printInfo() const override;
    int addNewComponent(std::shared_ptr<Component> newChild) override;
    int removeComponent(std::shared_ptr<Component> unWantedChild) override;
    int testSensor() override;
    int activateSensor() override;
    int deActivateSensor() override;
    int getChildren(std::vector<std::shared_ptr<Component> > &sensors) const override;

private:
    bool isActive{false};
    std::string vendor;
    std::vector<std::unique_ptr<EmergencyService>> services;
};

#endif // SENSOR_H
