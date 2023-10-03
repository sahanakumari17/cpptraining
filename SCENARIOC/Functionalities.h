#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Car.h"
#include "Bike.h"

//this functiom should create object on heap n store their pointers
void createObjects(Vehicle* arr[3]);


//for finding the avgprice for all cars
float AveragePrice(Vehicle* arr[3]); //parring array of car pointer

void CalculateTax(Vehicle* arr[3]);
void FreeMemory(Vehicle* arr[3]);
#endif // FUNCTIONALITIES_H
