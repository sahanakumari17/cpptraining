#include "Vehicle.h"
#include "Type.h"
#include "Functionalities.h"
int main(){
   Vehicle* arr[3];
   createObjects(arr);
   std::cout<<"average price:" << AveragePrice(arr);    
    
}