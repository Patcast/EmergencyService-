#ifndef MONITOREDSPACE_H
#define MONITOREDSPACE_H
#include "component.h"

class MonitoredSpace: public Component
{
private:
    std::vector<std::shared_ptr<Component>> children;

public:
    MonitoredSpace( int id,std::string_view description);
    int getSizeOfChildren();
    int activateSensor() override;
    int deActivateSensor() override;
    int testSensor() override;
    int addNewComponent(std::shared_ptr<Component> newChild) override;
    int removeComponent(std::shared_ptr<Component> unWantedChild) override;
    void printInfo() const override;
    int getChildren(std::vector<std::shared_ptr<Component>> &sensors) const override;
};

#endif // MONITOREDSPACE_H
