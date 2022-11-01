#include "gas.h"

Gas::Gas(std::string_view description, std::string_view vendor, int gasThreshold) : Sensor(description, vendor) {
    this->gasThreshold = gasThreshold;
}
