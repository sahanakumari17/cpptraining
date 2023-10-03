#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include "Type.h"

class Customer
{
private:
    /* data */
    int _id;
    std::string _name;
    Type _type;
    float _customerStoreCredits;


public:
    Customer(int id,
    std::string name,
    Type type,float customerStoreCredits) ;
    ~Customer() {
        std::cout<<"customer with ths id :"
        <<_id<<"destroyed"<<"\n";
    }

   //creating a default constructor,no need to add th definiton in .cpp file
    Customer(const Customer&)=default;



    int id() const { return _id; }

    std::string name() const { return _name; }

    Type type() const { return _type; }

    float customerStoreCredits() const { return _customerStoreCredits; }

    friend std::ostream &operator<<(std::ostream &os, const Customer &rhs);

    
    
};
std::string DisplayEnum(const Type value);

#endif // CUSTOMER_H

