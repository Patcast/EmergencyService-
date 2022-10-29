#ifndef COMPONENT_H
#define COMPONENT_H
#include <string>
#include <QVector>
#include "sensor.h"


class component
{


private:
    int Id;
    std::string description;

public:
    component(int Id, std::string description);
    int getId();
    std::string getDescription();
    void addNewComponent(component *c);
    void addNewSensor(Sensor *c);
    void remove(component *c);
    QVector<component*> getChildren();
    void activateSensor();

};

#endif // COMPONENT_H
