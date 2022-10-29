#ifndef MONITOREDSPACE_H
#define MONITOREDSPACE_H
#include "component.h"
#include <QVector>

class MonitoredSpace: public component
{
using component::component;
private:
//    double Id;
//    std::string description;
    QVector<component*> children;

public:
    MonitoredSpace(int Id, std::string description );
    void addNewComponent(component *c);
    void remove(component *c);
    QVector<component*> getChildren();
    void activateSensor();
//    component* getComponentById(double id);
};

#endif // MONITOREDSPACE_H
