#include "Car.h"
#include "Vehicle.h"

Car::Car(std::string id, std::string brand,  VehicleType type,float price,CarType ctype) 
: Vehicle(id,brand,type,price),_car_type_(ctype)
{

}

Car::Car(std::string id, std::string brand, VehicleType type,CarType ctype) :Vehicle(id,brand,type),_car_type_(ctype)
{

}
float Car::CalculateTax(){
return 0.1f*price();

}
std::ostream &operator<<(std::ostream &os, const Car &rhs) {
    os << static_cast<const Vehicle &>(rhs)
       << " _car_type_: " << DisplayEnum(rhs._car_type_);
    return os;
}

 std::string DisplayEnum(const CarType val)
{
    if(val==CarType::SEDAN)
    { 
        return "sedan";
    }else 
    {
        return "suv";
    }
}

