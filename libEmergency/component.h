#ifndef COMPONENT_H
#define COMPONENT_H
#include <string>
#include <QVector>



class Component
{
private:
    int id;
    std::string_view description;

public:
    Component(int id, std::string_view description);
    int getId() const;
    std::string_view getDescription() const;


    // Virtuals
    virtual void printInfo() const;
    virtual int addNewComponent(std::shared_ptr<Component> newChild) = 0;
    virtual int removeComponent(std::shared_ptr<Component> unWantedChild) = 0;
    virtual int testSensor() = 0;
    virtual int activateSensor() = 0;
    virtual int deActivateSensor() = 0;
    virtual int getChildren(std::vector<std::shared_ptr<Component>> & sensors)  const = 0;
};

#endif // COMPONENT_H
