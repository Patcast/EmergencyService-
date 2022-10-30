#include "controlcenter.h"
#include "monitoredspace.h"

ControlCenter::ControlCenter(std::shared_ptr<MonitoredSpace> topMonitoredSpace) : Observer()
{
    this->topMonitoredSpace = topMonitoredSpace;
}
