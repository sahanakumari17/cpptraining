#include "Functionalities.h"


void createObjects(Vehicle *arr[3])
{
    arr[0]=new Bike("v101","Honda",VehicleType::CAR,7800.0f,BikeType::SPORTD);
     arr[1]=new Car("v102","Honda",VehicleType::CAR,9000.0f,CarType::SEDAN);
      arr[2]=new Car("v103","Honda",VehicleType::CAR,8900.0f,CarType::SEDAN);

}

float AveragePrice(Vehicle* arr[3])
{
    float total=0.0f;
    for(int i=0;i<3;i++)
    {
 total+=(arr[i])->price();
    }
    return total/3;
}

void CalculateTax(Vehicle* arr[3])
{
   for(int i=0;i<3;i++)
   {
    std::cout<<(arr[i])->CalculateTax()<<"\n";
   }
}

void FreeMemory(Vehicle* arr[3])
{
    for(int i=0;i<3;i++)
    {
        delete arr[i];  //for deleting the objectes created on heap
    }
}
