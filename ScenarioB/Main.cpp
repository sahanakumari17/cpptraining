#include <iostream>
#include "Car.h"
#include "Functionalities.h"

int main(){
 Car* arr[3]; //3 locatons reserved; each location can store 8 bytes(address)
   createObjects(arr);
   std::cout<<"average price for all cars:" << AveragePrice(arr)<<"\n";  
  // AveragePrice(arr);
  CalculateTax(arr);
   FreeMemory(arr);
    

}