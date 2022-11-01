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
    void printInfo() const;

    // Virtuals
    virtual int addNewComponent(std::shared_ptr<Component> newChild) = 0;
    virtual int removeComponent(std::shared_ptr<Component> unWantedChild) = 0;
    virtual int testSensor() = 0;
    virtual int activateSensor() = 0;
    virtual int deActivateSensor() = 0;
    virtual std::shared_ptr<Component> const getChildren() const = 0;
};

#endif // COMPONENT_H
