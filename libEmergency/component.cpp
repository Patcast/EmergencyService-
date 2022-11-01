#include "component.h"
#include <string>
#include <iostream>

int const_id=0;

Component::Component(std::string_view des) : id{++const_id}, description{des}
{
    std::cout << "Calling Component constructor" << std::endl;
}

int Component:: getId() const{

    return id;
}

std::string_view Component:: getDescription() const{
    return description;
}

void Component::printInfo() const
{
    std::cout
        << "------------\ndescription:\t"
        << getDescription()
        << "\nid:\t\t" << getId()
        << std::endl;
}

void Component::setLocation(const std::string_view &newLocation)
{
    return;
}

const std::string &Component::getLocation() const
{
    return description;
}

void Component::printSensorsSorted(sorter sortement) {
    std::vector<std::shared_ptr<Component>> sensors;
    getChildren(sensors);
    sort(sensors,sortement);
    for(auto &c:sensors)        c->printInfo();
    std::cout<<"\n\n -------- "<<"Number of sensors: "<<sensors.size()<<" -------"<<std::endl;
}

bool Component::compareIds(std::shared_ptr<Component> c1, std::shared_ptr<Component> c2){
    return c1->getId()<c2->getId();
}

bool Component::compareVendors(std::shared_ptr<Component> c1, std::shared_ptr<Component> c2){
    return c1->getDescription()<c2->getDescription();
}

bool Component::compareLocations(std::shared_ptr<Component> c1, std::shared_ptr<Component> c2){
    return c1->getLocation()<c2->getLocation();
}

void Component::sort(std::vector<std::shared_ptr<Component>> &components, sorter sortement) {
    switch (sortement) {
        case sorter::id:
            std::sort(components.begin(), components.end(), compareIds);
            break;
        case sorter::vendor:
            std::sort(components.begin(), components.end(), compareVendors);
            break;
        case sorter::location:
            std::sort(components.begin(), components.end(), compareLocations);
            break;
    default:
        break;
    }
}
