//function to create 3 objects on heap

#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Vehicle.h"

//unless evaluate ,do no write code here

/* 
  Function to create 3 objects on the heap and store thier address in the container array
*/

void createObjects(Vehicle* container[3]); //v need to access 3 address,so add bracket of 3



/* function to find avg of price values of 3 objects inn the container array
*/
float AveragePrice(Vehicle* container[3]);
#endif // FUNCTIONALITIES_H
