#include "sensor.h"
#include <iostream>
#include "emergencyservice.h"

Sensor::Sensor(std::string_view des, std::string_view v) : Component{des}, vendor{v}
{
    std::cout << "Calling Sensor constructor" << std::endl;
}

int Sensor::activateSensor()
{
    isActive = true;
    return 0;
}

int Sensor::deActivateSensor()
{
    isActive = false;
    return 0;
}

int Sensor::addNewComponent(std::shared_ptr<Component> newChild)
{
    return castingErrorAsComponent();
}

int Sensor::removeComponent(std::shared_ptr<Component> unWantedChild)
{
    return castingErrorAsComponent();
}

int Sensor::addNewService(std::unique_ptr<EmergencyService> newService)
{
    services.push_back(std::move(newService));
    return 0;
}

int Sensor::removeServiceByIndex(unsigned int index)
{
    if (index >= services.size())
    {
        std::cout << "Could not remove item. The index is out of Bounds" << std::endl;
        return 1;
    }
    services.erase(services.begin() + index);
    return 0;
}

int Sensor::castingErrorAsComponent()
{
    std::cout << "Error: This is an object of type Sensor, It does not contain a list of components" << std::endl;
    return 1;
}

int Sensor::testSensor()
{
    if (isActive)
        for (auto &s : services)
            s->execute();
    else
        std::cout << "\nError Sensor " << getId() << " is inactive. Cannot be tested\n"
                  << std::endl;
    return 0;
}

int Sensor::getChildren(std::vector<std::shared_ptr<Component> > &sensors) const
{
    return 1;
}

void Sensor::setLocation(const std::string_view &newLocation)
{
    location = newLocation;
}

const std::string &Sensor::getLocation() const
{
    return location;
}



void Sensor::printInfo() const
{
    Component::printInfo();
    std::cout
        << "vendor:\t\t"
        << vendor
        << "\nLocation:\t\t"
        << location
        << "\nstate:\t\t" << isActive
        << std::endl;
}



//Sensor& Sensor::operator<<(Sensor &s)
//{
//    s.printInfo();
//    return s;
//}
