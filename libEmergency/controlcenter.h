#ifndef CONTROLCENTER_H
#define CONTROLCENTER_H
#include <string>

#include "monitoredspace.h"
#include "observer.h"

class ControlCenter : public Observer
{
private:
    int sNextId = 0;
public:
    ControlCenter(std::shared_ptr<MonitoredSpace> topMonitoredSpace);
    std::shared_ptr<MonitoredSpace> topMonitoredSpace;
    void update(std::string data);    
    std::string generateUniqueId();
};

#endif // CONTROLCENTER_H
