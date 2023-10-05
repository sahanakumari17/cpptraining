#ifndef BIKE_H
#define BIKE_H
#include "BikeType.h"
#include "Vehicle.h"

class Bike:public Vehicle
{
private:
    /* data */
    float _milage;
    BikeType _btype;
public:
    Bike(std::string id,std::string brand,float price,VehicleType type,float milage,BikeType btype);
     Bike(std::string id,std::string brand,VehicleType type,float milage,BikeType btype);
     float calculateTax() override;
     
    ~Bike() {
        std::cout<<"bike id"<<id()<<"is destroyed\n";
            }
};

#endif // BIKE_H
