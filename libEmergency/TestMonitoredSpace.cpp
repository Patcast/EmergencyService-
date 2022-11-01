#include "monitoredspace.h"
#include "component.h"
#include "sensor.h"
#include <QCoreApplication>
#include <iostream>
#include <QMetaObject>


int main(int argc, char *argv[])
{
/*
    MonitoredSpace MonitoredSpace1(1 ,"test");
    std::cout << "description " << MonitoredSpace1.getDescription() << std::endl;
    std::cout << "id " << MonitoredSpace1.getId() << std::endl;
    MonitoredSpace1.getChildren();
    MonitoredSpace MonitoredSpace2(2 ,"test5");
    component component1(69,"test2");
    std::cout << "description " << component1.getDescription() << std::endl;
    std::cout << "Id " << component1.getId() << std::endl;

    component component2(70,"test3");
    MonitoredSpace1.addNewComponent(&component1);
    std::cout << "size = 1 " << MonitoredSpace1.getChildren().size() << std::endl;
    MonitoredSpace1.addNewComponent(&component2);
    std::cout << "size = 2 " << MonitoredSpace1.getChildren().size() << std::endl;
    MonitoredSpace1.addNewComponent(&MonitoredSpace2);
    int size = MonitoredSpace1.getChildren().size();
    QList children = MonitoredSpace1.getChildren();
    for(int i = 0; i< size;i++){
                std::cout << "child "<< i << " " << children[i]->getId() << std::endl;
            }
*/

    MonitoredSpace MonitoredSpace1(1 ,"test");
    MonitoredSpace MonitoredSpace2(2 ,"test5");
    Sensor Sensor1(3,"smoke");
    Sensor Sensor2(4,"Gas");
    Sensor Sensor3(5,"Motion");
    MonitoredSpace1.addNewComponent(&MonitoredSpace2);
    //std::cout << "children " <<MonitoredSpace1.testSensor()<< std::endl;
    MonitoredSpace1.addNewComponent(&Sensor1);

    MonitoredSpace2.addNewComponent(&Sensor2);
    MonitoredSpace2.addNewComponent(&Sensor3);

    MonitoredSpace1.activateSensor();       //3,4 en 5
//    MonitoredSpace2.activateSensor();     //4 en 5
//    MonitoredSpace2.deactivateSensor();
//    std::cout << "testSensor3 " << Sensor3.testSensor() << std::endl;
//    std::cout << "MonitoredSpace1 " << MonitoredSpace1.testSensor() << std::endl;

}

