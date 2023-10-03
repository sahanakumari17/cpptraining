#include "Vehicle.h"
#include "VehicleType.h"
#include "Car.h"

Vehicle::Vehicle(std::string id, std::string brand, VehicleType type, float price)
:_id(id),_brand(brand),__type(type),_price(price)
{

}

Vehicle::Vehicle(std::string id, std::string brand, VehicleType type)
:_id(id),_brand(brand),__type(type)
 
{
}
