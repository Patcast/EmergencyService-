#include "monitoredspace.h"
#include <iostream>
#include <QObject>


MonitoredSpace::MonitoredSpace(int Id,std::string des)
    :component{Id,des}
 {
    std::cout << "MonitoredSpace constructor 1 called with parameters " << Id << ", " << des <<  std::endl;
 }


void MonitoredSpace:: addNewComponent(component *c){
    children.push_back(c);

}

void MonitoredSpace:: remove(component *c){
    int index = children.indexOf(c);
    children.remove(index);
}
QVector<component*> MonitoredSpace:: getChildren(){
    return children;
}

int MonitoredSpace::activateSensor(){
    for(int i = 0; i<children.size();i++){
        children[i]->activateSensor();
    }
    return 2;
}

int MonitoredSpace::deactivateSensor(){
    for(int i = 0; i<children.size();i++){
        children[i]->deactivateSensor();
    }
    return 2;
}



int MonitoredSpace:: testSensor(){
    for(int i = 0; i<children.size();i++){
        children[i]->testSensor();
        }
    return 2;
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
