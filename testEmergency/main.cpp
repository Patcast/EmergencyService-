#include <iostream>
#include <typeinfo>
#include <algorithm>
#include "sensor.h"
#include "monitoredspace.h"


int main()
{
    auto s1 = std::make_shared<Sensor>("Heat Sensor","Lego Land");
    auto s2 = std::make_shared<Sensor>("Humidity Sensor","Lego Land");
    auto s3 = std::make_shared<Sensor>("Motion Sensor","Robocop");
    auto s4 = std::make_shared<Sensor>("Motion Sensor","Robocop");
    auto s5 = std::make_shared<Sensor>("Light Sensor","Lego Land");
    auto m1 = std::make_shared<MonitoredSpace>("Class room");
    auto m2 = std::make_shared<MonitoredSpace>("Building");
    auto m3 = std::make_shared<MonitoredSpace>("Street");

    m1->addNewComponent(s1);
    m2->addNewComponent(m1);
    m2->addNewComponent(s4);
    m2->addNewComponent(s5);
    m3->addNewComponent(m2);
    m1->addNewComponent(s2);
    m2->addNewComponent(s3);

    std::vector<std::shared_ptr<Component>> sensors = m2->getChildren();

    //std::sort(sensors.begin(), sensors.end(), Component::compareIds);
    Component::sort(sensors, sorter::vendor);
    //s1->sort_collection(sensors);

    std::cout<<"\n\n1 --------"<<std::endl;
    for(auto &c:sensors)
       c->printInfo();
    std::cout<<"\n\n -------- "<<sensors.size()<<" -------"<<std::endl;



    return 0;
}

