#include "monitoredspace.h"
#include <iostream>
#include <QObject>


MonitoredSpace::MonitoredSpace(int Id,std::string_view des)
    :Component{Id,des}
 {
     std::cout << "Calling MonitorSpace constructor" << std::endl;
 }

 int MonitoredSpace::addNewComponent(std::shared_ptr<Component> newChild)
 {
     children.push_back(std::move(newChild));
     return 0;
 }

int MonitoredSpace::removeComponent(std::shared_ptr<Component> unWantedChild) {
    for (unsigned int index = 1; index < children.size(); index++) {
        if (children[index] == unWantedChild)
        {
            children.erase(children.begin() + index);
            return 0;
        }
    }
    std::cout << "Coud not find Component pointer on Children" << std::endl;
    return 1;
}

const std::shared_ptr<Component> MonitoredSpace::getChildren() const
{
    std::vector<std::shared_ptr<Component>> sensors;

    return nullptr;
}

int MonitoredSpace::activateSensor(){
    for (auto &c : children)
        c->activateSensor();
    return 0;
}

int MonitoredSpace::deactivateSensor(){
    for (auto &c : children)
        c->deActivateSensor();
    return 0;
}

void MonitoredSpace::printInfo() const
{
    std::cout << "\n\n---Space information-----" << std::endl;
    Component::printInfo();
    std::cout << "\n---Children information-----" << std::endl;
    for (auto &c : children)
    {
        c->printInfo();
    }
}

int MonitoredSpace:: testSensor(){
    for (auto &c : children)
        c->testSensor();
    return 0;
}

int MonitoredSpace::getSizeOfChildren()
{
    return children.size();
}

/*
component* MonitoredSpace:: getComponentById(double id){
    int size = children.size();
    for(int i = 0; i< size;i++){
        if( children[i]->getId() == id){
            return children[i];
        }
    }
    return NULL;
}
*/
