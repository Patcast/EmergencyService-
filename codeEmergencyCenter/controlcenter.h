#ifndef CONTROLCENTER_H
#define CONTROLCENTER_H

#include "monitoredspace.h"
#include "observer.h"

class ControlCenter : public Observer
{
public:
    ControlCenter(std::shared_ptr<MonitoredSpace> topMonitoredSpace);
    std::shared_ptr<MonitoredSpace> topMonitoredSpace;
    void update(std::string data);
};

#endif // CONTROLCENTER_H
