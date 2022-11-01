#include <iostream>
#include <algorithm>
#include "motion.h"
#include "callauthority.h"
#include "gas.h"
#include "monitoredspace.h"
#include "alarm.h"
#include "actuator.h"


int main()
{


//GALAXY
      auto twix_galaxy = std::make_shared<MonitoredSpace>("Txix Galaxy");
      auto motion_sensor = std::make_shared<Motion>("Motion Sensor","Disney",2,1000);
      motion_sensor->activateSensor();
      auto callPolice = std::make_unique<CallAuthority>("Police","Calling authority");
      motion_sensor->addNewService(move(callPolice));
// Planet X
      auto planet_x = std::make_shared<MonitoredSpace>("Planet X");
      auto sulphur_smoke_sensor = std::make_shared<Gas>("Sulphur Gas Sensor","Disney",1000000000);
      auto alarm_sulphur = std::make_unique<Alarm>("Alarm Sulphur");
      auto callScientist = std::make_unique<CallAuthority>("Scientists","Emergency sulphur levels are too high.");
      sulphur_smoke_sensor->addNewService(move(alarm_sulphur));
      sulphur_smoke_sensor->addNewService(move(callScientist));
      planet_x->addNewComponent(sulphur_smoke_sensor);
      twix_galaxy->addNewComponent(planet_x);
//Surface Planet X Volcanos
      auto planet_x_redstone_volcano = std::make_shared<MonitoredSpace>("Planet X Redstone Volcano");
      auto planet_x_orangestone_volcano = std::make_shared<MonitoredSpace>("Planet X Orangestone Volcano");
      auto smoke_sensor_redstone= std::make_shared<Gas>("Redstone Smoke Sensor","Disney",1000);
      auto smoke_sensor_orangestone = std::make_shared<Gas>("Orangestone Smoke Sensor","Disney",1000);
      auto cooling_sprinklers = std::make_unique<Actuator>("Cooling Sprinklers Redstone");
      smoke_sensor_redstone->addNewService(move(cooling_sprinklers));
      auto cooling_sprinklers2 = std::make_unique<Actuator>("Cooling Sprinklers Orangestone");
      smoke_sensor_orangestone->addNewService(move(cooling_sprinklers2));
      planet_x_redstone_volcano->addNewComponent(smoke_sensor_redstone);
      planet_x_orangestone_volcano->addNewComponent(smoke_sensor_orangestone);
      planet_x->addNewComponent(planet_x_orangestone_volcano);
      planet_x->addNewComponent(planet_x_redstone_volcano);
// Planet LV
      auto planet_lv = std::make_shared<MonitoredSpace>("Planet LV");
      twix_galaxy->addNewComponent(planet_lv);
      auto oxygen_gas_sensor = std::make_shared<Gas>("Oxygen Gas Sensor","Disney",1200000000);
      planet_lv->addNewComponent(oxygen_gas_sensor);
      auto alarm_oxygen = std::make_unique<Alarm>("Alarm Low Oxygen");
      oxygen_gas_sensor->addNewService(move(alarm_oxygen));
      auto motion_sensor_atmosphere = std::make_shared<Motion>("Motion Sensor Atmosphere","Disney",2,1000);
      motion_sensor_atmosphere->activateSensor();
      planet_lv->addNewComponent(motion_sensor_atmosphere);
      auto callScientist_lv = std::make_unique<CallAuthority>("Scientists Planet LV","Atmosphere was breached");
      motion_sensor_atmosphere->addNewService(move(callScientist_lv));
      auto callPeaceKeepers = std::make_unique<CallAuthority>("Peace Keepers","Atmosphere was breached");
      motion_sensor_atmosphere->addNewService(move(callPeaceKeepers));
// Planet LV Egg Sites
      auto moonUnit = std::make_shared<MonitoredSpace>("Moon Unit");
      planet_lv->addNewComponent(moonUnit);
      auto smokeSensorLV = std::make_shared<Gas>("SmokeSensor from Moon Unit","Disney",12000);
      moonUnit->addNewComponent(smokeSensorLV);
      auto callFireFighters = std::make_unique<CallAuthority>("Fire Fighters from LV","smoke Sersor is off");
      smokeSensorLV->addNewService(move(callFireFighters));
      auto motionSensorLV = std::make_shared<Motion>("Motion Sensor Eggs Hatching","Disney",2,10,20,8);
      moonUnit->addNewComponent(motionSensorLV);
      auto callZorglax = std::make_unique<CallAuthority>("Zorglax","Eggs are hatching!");
      motionSensorLV->addNewService(move(callZorglax));

      auto dweezil = std::make_shared<MonitoredSpace>("Dweezil");
      planet_lv->addNewComponent(dweezil);
      auto smokeSensorLVDweezil = std::make_shared<Gas>("SmokeSensor from Deweezil","Disney",12000);
      dweezil->addNewComponent(smokeSensorLVDweezil);
      auto callFireFighters2 = std::make_unique<CallAuthority>("Fire Fighters from Dweezil","smoke Sersor is off in Dweezil");
      smokeSensorLVDweezil->addNewService(move(callFireFighters2));
      auto motionSensorLVDweezil = std::make_shared<Motion>("Motion Sensor Eggs Hatching","Disney",2,10,20,8);
      dweezil->addNewComponent(motionSensorLVDweezil);
      auto callZorglax2 = std::make_unique<CallAuthority>("Zorglax","Eggs are hatching in Dweezil!");
      motionSensorLVDweezil->addNewService(move(callZorglax2));

//**************TESTING**********************////
      //Part 1
      std::cout<<"\nTESTING 1******\n"<<std::endl;
      ++(*oxygen_gas_sensor);
      ++(*sulphur_smoke_sensor);
      <<(*sulphur_smoke_sensor);




//      sulphur_smoke_sensor->testSensor();
//      oxygen_gas_sensor->testSensor();
//      motion_sensor_atmosphere->activateSensor();
//      motion_sensor_atmosphere->testSensor();
//      //Part 2
//      std::cout<<"\nTESTING 2******\n"<<std::endl;
//      planet_x->activateSensor();
//      planet_x->testSensor();
//      //Part 3
//      std::cout<<"\nTESTING 3******\n"<<std::endl;
//      planet_lv->deActivateSensor();
//      planet_lv->testSensor();
//      //Part 4
//      std::cout<<"\nTESTING 4******\n"<<std::endl;
//      planet_lv->activateSensor();
//      planet_lv->testSensor();
//      std::cout<<"\nTESTING 4 Moon Unit******\n"<<std::endl;
//      moonUnit->testSensor();
//      std::cout<<"\nTESTING 4 Dweezil Unit******\n"<<std::endl;
//      dweezil->testSensor();
//      //Part 5
//      std::cout<<"\nTESTING 5******\n"<<std::endl;
//      twix_galaxy->printSensorsSorted(sorter::location);


    return 0;
}
