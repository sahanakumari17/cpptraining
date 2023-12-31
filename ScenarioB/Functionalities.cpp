#include "Functionalities.h"

void createObjects(Car *arr[3])
{
    arr[0]=new Car("v101","Honda",VehicleType::CAR,78000.0f,CarType::SEDAN);
     arr[1]=new Car("v102","Honda",VehicleType::CAR,9000.0f,CarType::SEDAN);
      arr[2]=new Car("v103","Honda",VehicleType::CAR,8900.0f,CarType::SEDAN);

}

float AveragePrice(Car *arr[3])
{
    float total=0.0f;
    for(int i=0;i<3;i++)
    {
 total+=(arr[i])->price();
    }
    return total/3;
}

void CalculateTax(Car *arr[3])
{
   for(int i=0;i<3;i++)
   {
    std::cout<<(arr[i])->CalculateTax()<<"\n";
   }
}

void FreeMemory(Car *arr[3])
{
    for(int i=0;i<3;i++)
    {
        delete arr[i];  //for deleting the objectes created on heap
    }
}
