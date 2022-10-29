#ifndef COMPONENT_H
#define COMPONENT_H
#include <string>
#include <QVector>


class component
{


private:
    QVector<component*> children;

public:
    double Id;
    std::string description;

    component(double Id, std::string description);
    double getId();
    std::string getDescription();

    void addNewComponent(component *c);
    void remove(component *c);
    QVector<component*> getChildren();
};

#endif // COMPONENT_H
