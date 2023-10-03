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

std::ostream &operator<<(std::ostream &os, const Vehicle &rhs) {
    os << "_id: " << rhs._id
       << " _brand: " << rhs._brand
       << " _price: " << rhs._price
       << " __type: " << DisplayEnum(rhs.__type);
    return os;
}

std::string DisplayEnum(const VehicleType value)
{
    if(value == VehicleType::BIKE)
    {
    return "Bike";
    }
    else if(value == VehicleType::CAR)
    {
        return "CAR";
    }
    else {
        return "OTHER";
    }
}
