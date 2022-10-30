#ifndef COMPONENT_H
#define COMPONENT_H
#include <string>
#include <QVector>



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
    void remove(component *c);
    virtual int activateSensor();
    virtual int deactivateSensor();
    virtual int testSensor();
};

#endif // COMPONENT_H
