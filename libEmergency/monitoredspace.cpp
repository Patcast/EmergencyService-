#include "monitoredspace.h"
#include <iostream>



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

int MonitoredSpace::getChildren(std::vector<std::shared_ptr<Component>> &sensors) const
{
    // returns length of vector as unsigned int
      unsigned int vecSize = children.size();
      // run for loop from 0 to vecSize
      for(unsigned int i = 0; i < vecSize; i++)
      {
          //std::cout<<"MonitoredSpace with ID"<<getId()<<std::endl;

          if(children[i]->getChildren(sensors)){
              sensors.push_back(children[i]);
          }
      }
    return 0;
}

int MonitoredSpace::activateSensor(){
    for (auto &c : children)
        c->activateSensor();
    return 0;
}

int MonitoredSpace::deActivateSensor(){
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


