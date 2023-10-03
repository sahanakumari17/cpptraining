#include <iostream>
#include "Customer.h"
#include "Functionalities.h"
int main(){

    Customer* container[5];
    CreateObjects(container);
    std::cout<<"Avg : "<<avgStoreCredits(container,Type::PREMIUM)<<"\n";
    FreeMemory(container);

}