#include "component.h"
#include <string>
#include <iostream>

Component::Component(int Id, std::string_view des) : id{Id}, description{des}
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
