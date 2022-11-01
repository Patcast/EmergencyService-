#include <iostream>
#include <typeinfo>
#include <algorithm>
#include "sensor.h"
#include "monitoredspace.h"

int generateId()
{
    static int idValue{0}; // static duration via static keyword.  This initializer is only executed once.
    ++idValue;
    return idValue;
}
bool compareIds(std::shared_ptr<Component> c1, std::shared_ptr<Component> c2){return c1->getId()<c2->getId();}
bool compareVendors(std::shared_ptr<Component> c1, std::shared_ptr<Component> c2){return c1->getDescription()<c2->getDescription();}
bool compareLocations(std::shared_ptr<Component> c1, std::shared_ptr<Component> c2){return c1->getLocation()<c2->getLocation();}

int main()
{
    auto s1 = std::make_shared<Sensor>(generateId(),"Heat Sensor","Lego Land");
    auto s2 = std::make_shared<Sensor>(generateId(),"Humidity Sensor","Lego Land");
    auto s3 = std::make_shared<Sensor>(generateId(),"Motion Sensor","Robocop");
    auto s4 = std::make_shared<Sensor>(generateId(),"Motion Sensor","Robocop");
    auto s5 = std::make_shared<Sensor>(generateId(),"Light Sensor","Lego Land");
    auto m1 = std::make_shared<MonitoredSpace>(generateId(),"Class room");
    auto m2 = std::make_shared<MonitoredSpace>(generateId(),"Building");
    auto m3 = std::make_shared<MonitoredSpace>(generateId(),"Street");

    m1->addNewComponent(s1);
    m2->addNewComponent(m1);
    m2->addNewComponent(s4);
    m2->addNewComponent(s5);
    m3->addNewComponent(m2);
    m1->addNewComponent(s2);
    m2->addNewComponent(s3);

    std::vector<std::shared_ptr<Component>> sensors;
    m2->getChildren(sensors);
    std::sort (sensors.begin(), sensors.end(), compareLocations);

    std::cout<<"\n\n1 --------"<<std::endl;
    for(auto &c:sensors)
       c->printInfo();
    std::cout<<"\n\n -------- "<<sensors.size()<<" -------"<<std::endl;



    return 0;
}

