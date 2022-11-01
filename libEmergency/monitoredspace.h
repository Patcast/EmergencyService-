#ifndef MONITOREDSPACE_H
#define MONITOREDSPACE_H
#include "component.h"

class MonitoredSpace: public Component
{
//using component::component;
private:
//    double Id;
//    std::string description;
    std::vector<std::shared_ptr<Component>> children;

public:
    MonitoredSpace(int id, std::string_view description);
    int getSizeOfChildren();
    int activateSensor() override;
    int deactivateSensor();
    int testSensor() override;
    int addNewComponent(std::shared_ptr<Component> newChild) override;
    int removeComponent(std::shared_ptr<Component> unWantedChild) override;
    void printInfo() const;
    std::shared_ptr<Component> const getChildren() const override;
    //    component* getComponentById(double id);
};

#endif // MONITOREDSPACE_H
