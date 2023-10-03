#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Customer.h"


//function to create object on a stack n store their address in a container array
void CreateObjects(Customer* arr[5]);

//function to find and return a container of a customer object whose customer type matches the type passed as the second
//parameter
void findCustomer(Customer* arr[5], Type type,Customer (&arr2)[]);

/*
function to return a container of all customer instances whose customerStoreCredits are between 100 and 200 (both in included)
*/
void getCustomerCredits(Customer* arr[5]);

/*
function to find avg CustomerCredits of all customers whose customer type matches the type provided as the second argument
*/

float avgStoreCredits(Customer* arr[5],Type type);
//to free a heap memory
void FreeMemory(Customer* arr[5]);




#endif // FUNCTIONALITIES_H
