#include<iostream>
#include "VehicleType.h"
#include "Vehicle.h"
#include "Functionalities.h"

void Demo(){
    Vehicle v1("v101","Maruti",7800.0f,VehicleType::BIKE);
    Vehicle v2("v102","marutie",1009.0f,VehicleType::CAR);
    float ans =v1+v2; //stack v1.operator+(v2)
  
     Vehicle* v3=new Vehicle("v101","Maruti",7800.0f,VehicleType::BIKE); //in heap
    Vehicle* v4=new Vehicle("v102","marutie",1009.0f,VehicleType::CAR);
     std::cout<<"opearator overloading :"<<ans<<"\n";
     std::cout<<(*v3)+(*v4)<<"\n";
    

}
int main(){
    Demo();
}