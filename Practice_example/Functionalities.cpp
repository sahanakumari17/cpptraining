#include "Functionalities.h"
#include "Customer.h"


void CreateObjects(Customer* container[5])
{
    container[0]=new Customer(101,"Ramesh",Type::PREMIUM, 105);
    container[1]=new Customer(102,"Shyam",Type::REGULAR,  100);
    container[2]=new Customer(103,"Sahana",Type::VIP,  200);
    container[3]=new Customer(104,"Prem",Type::PREMIUM,  125);
    container[4]=new Customer(1055,"Shri",Type::PREMIUM,  260);
    for(int i=0;i<5;i++)
    {
        std::cout<<*container[i]<<"\n";
    }
}

// void findCustomer(Customer *arr[5], Type type, Customer (&arr2)[])
// {

// }

float avgStoreCredits(Customer *arr[5], Type type)
{
    float total=0.0f;
    int c=0;
    for(int i=0;i<5;i++)
    {
        if((arr[i])->type()==type)
        {
            total+=(arr[i])->customerStoreCredits();
            ++c;
        }
    }
    return total/c;
}

void FreeMemory(Customer *arr[5])

{
    for(int i=0;i<5;i++)
    {
        delete arr[i];
    }
}
