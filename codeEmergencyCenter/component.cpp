#include "component.h"
#include <string>
#include <iostream>



component::component(double Id,std::string des)
    :Id{Id}, description{des}
{
    std::cout << "component constructor 1 called with parameters " << Id << des << std::endl;
}
double component:: getId(){

    return Id;
}

std::string component:: getDescription(){
    return description;
}

void component:: addNewComponent(component *c){
    children.push_back(c);

}
void component:: remove(component *c){
    int index = children.indexOf(c);
    children.remove(index);
}

QList<component*> component:: getChildren(){
    return children;

}
