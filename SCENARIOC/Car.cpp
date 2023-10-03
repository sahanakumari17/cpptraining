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