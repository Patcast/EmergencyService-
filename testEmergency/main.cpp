#include <iostream>
#include <typeinfo>
#include "sensor.h"
#include "monitoredspace.h"
#include "emergencyservice.h"

int generateId()
{
    static int idValue{0}; // static duration via static keyword.  This initializer is only executed once.
    ++idValue;
    std::cout<<"generatig id: "<<idValue<<std::endl;
    return idValue;
}
int main()
{
    auto s1 = std::make_shared<Sensor>(generateId(),"Heat Sensor","Lego Land");
    auto alarm = std::make_unique<EmergencyService>("Alarm","ON");
    auto lights = std::make_unique<EmergencyService>("Lights","ON");
    s1->addNewService(std::move(alarm));
    s1->addNewService(std::move(lights));
    s1->activateSensor();
    s1->testSensor();
    auto s2 = std::make_shared<Sensor>(generateId(),"Humidity Sensor","Lego Land");
    auto m1 = std::make_shared<MonitoredSpace>(generateId(),"Class room");

    //std::cout<<typeid((s1)).name()<<std::endl;
    //auto m1 = std::make_shared<MonitoredSpace>(generateId(),"Class room");
    //m1->addNewComponent(s1);
    //std::cout<<typeid((s2)).name()<<std::endl;
    //std::cout<<typeid((m1)).name()<<std::endl;


    std::cout<<"is s1==s2? " << ((typeid(s1)==typeid(s2))==0?"False":"True")<<std::endl;
    std::cout<<"is s1==m1? " << ((typeid(s1)==typeid(m1))==0?"False":"True")<<std::endl;

//    m1->addNewComponent(s2);
//    MonitoredSpace m2 {generateId(),"Building"};
//    m2.addNewComponent(m1);
//    auto s3 = std::make_shared<Sensor>(generateId(),"Motion Sensor","Entrance");
//    m2.addNewComponent(s3);
//    m1->activateSensor();
//    m2.printInfo();
//    m2.testSensor();
    return 0;
}

