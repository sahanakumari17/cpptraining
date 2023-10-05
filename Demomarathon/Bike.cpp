#include "Bike.h"

Bike::Bike(std::string id, std::string brand, float price, VehicleType type, float milage, BikeType btype)
:Vehicle(id,brand,price,type),_milage(milage),_btype(btype)
{
}

Bike::Bike(std::string id, std::string brand, VehicleType type, float milage, BikeType btype)
:Vehicle(id,brand,type),_milage(milage),_btype(btype)
{
}

float Bike::calculateTax()
{
    return 0.08*price();
}
