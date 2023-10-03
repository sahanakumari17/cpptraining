#ifndef BIKE_H
#define BIKE_H

#include "BikeType.h"
#include "Vehicle.h"
class Bike: public Vehicle
{
private:
    /* data */
    float _bike_mileage;
    BikeType _bike_type;
public:
    Bike(std::string id,std::string brand,VehicleType type,float mileage,BikeType btype) ;
      Bike(std::string id,std::string brand,VehicleType type,float price,float mileage,BikeType btype) ;

    //3+2 parameters

    //4+2 parameters
    float CalculateTax() override;
    ~Bike() {
        std::cout<<"Bike part of vehicle with id"<<id()<<"is destroyes"<<"\n";
    }
};



#endif // BIKE_H
