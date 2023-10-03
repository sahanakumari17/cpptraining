#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include "VehicleType.h"

class Vehicle
{
private:
    /* data */
    std::string _id;
    std::string _brand;
    float _price;
    VehicleType __type;
public:
     
     Vehicle(const Vehicle& obj)=default ;
     Vehicle(std::string id,std::string brand,VehicleType type,float price) ;
     Vehicle(std::string id,std::string brand,VehicleType type) ;
     virtual float CalculateTax()=0;//pure virtual function (known as abstract method in java)
     ~Vehicle(){
    std::cout<<"object with id "<<_id<<"is destroyed\n";
     }

     std::string id() const { return _id; }

     std::string brand() const { return _brand; }

     float price() const { return _price; }

     VehicleType type() const { return __type; }
};

#endif // VEHICLE_H
