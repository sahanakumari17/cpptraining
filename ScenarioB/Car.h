#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include "CarType.h"
class Car:public Vehicle
{
    private:
     CarType _car_type_;
     public:

        //4+1
        Car(std::string id,std::string brand,VehicleType ctype,float price,CarType cType);
        //3+1
        Car(std::string id,std::string brand,VehicleType ctype,CarType cType);
        //override if v miss the lie t will be usefull
        float CalculateTax() override;

        
        
        ~Car(){
            std::cout<<"car part of vehicle with id:"
            <<id()<<"id destroyed\n";
        }
        CarType carType() const {return _car_type_;}
};

#endif // CAR_H
