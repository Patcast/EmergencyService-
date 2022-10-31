#include "component.h"
#include <string>
#include <iostream>



component::component(int Id,std::string des)
    :Id{Id}, description{des}
{
    //std::cout << "component constructor 1 called with parameters " << Id << des << std::endl;
}
int component:: getId(){

    return Id;
}

std::string component:: getDescription(){
    return description;
}

void component:: addNewComponent(component *c){
}

void component:: remove(component *c){
}

int component::activateSensor(){
    return 0;
}

int component::deactivateSensor(){
    return 0;
}

int component::testSensor(){
    return 0;
}


