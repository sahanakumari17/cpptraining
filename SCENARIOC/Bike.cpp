#include "Bike.h"
#include "Vehicle.h"
#include "BikeType.h"
#include "VehicleType.h"

    Bike::Bike(std::string id, std::string brand, VehicleType type, float mileage, BikeType btype)
    :Vehicle(id,brand,type),_bike_mileage(mileage),_bike_type(btype)
{
}

Bike::Bike(std::string id, std::string brand, VehicleType type, float price, float mileage, BikeType btype)
:Vehicle(id,brand,type,price),_bike_mileage(mileage),_bike_type(btype)
{
}

std::ostream &operator<<(std::ostream &os, const Bike &rhs) {
    os << static_cast<const Vehicle &>(rhs)
       << " _bike_mileage: " << rhs._bike_mileage
       << " _bike_type: " <<DisplayEnum(rhs._bike_type);
    return os;
}

std::string DisplayEnum(const BikeType val)
{
    if(val==BikeType::COMMUTE)
    { 
        return "Commute";
    }else 
    {
        return "Sports";
    }
}

float Bike::CalculateTax(){
    return 0.05f*price();
}
