#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Car.h"

//this functiom should create object on heap n store their pointers
void createObjects(Car* arr[3]);


//for finding the avgprice for all cars
float AveragePrice(Car* arr[3]); //parring array of car pointer

void CalculateTax(Car* arr[3]);
void FreeMemory(Car* arr[3]);
#endif // FUNCTIONALITIES_H
