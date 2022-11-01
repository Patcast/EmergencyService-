#include "gas.h"

Gas::Gas(int id, std::string_view description, std::string_view vendor, int gasThreshold) : Sensor(id, description, vendor) {
    this->gasThreshold = gasThreshold;
}
