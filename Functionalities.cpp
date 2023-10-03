#include "Functionalities.h"
#include "Vehicle.h"
#include "Type.h"

void createObjects(Vehicle *container[3])
{
    //container's 0 index now holds the address of this object on the hepa
    //v can store only 1 objects in 1 location

    container[0]=new Vehicle("v101","Maruti",Type::CAR,870000.0f);
     container[1]=new Vehicle("v102","Hoda",Type::CAR,970000.0f);
      container[2]=new Vehicle("v103","Toyota",Type::CAR,1270000.0f);
}
       
/* loop over all locations of the array for each locations pointer 
access _price attribute
add it total,dvde total by 3 and return
*/

float AveragePrice(Vehicle *container[3])

{
    float total=0.0f;

   
    for(int i=0;i<3;i++)
    {
        //total is prevous total added with price values taken from address at i position
        total+=(container[i])->price();
    }
    return total/3; //this will work only if there is  a data inside container
}
