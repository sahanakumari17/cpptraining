#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "Employee.h"
#include <iostream>

class Executive:virtual public Employee
{
private:
    /* data */
    std::string _location;
public:
    Executive(std::string id,std::string name,std::string location)
    :Employee(id, name),_location(location) {}

   virtual ~Executive() {
        std::cout<<"Executive destroyed\n";
    }
     void CalculateTax() override{
        std::cout<<"Executive pays 20% of tax\n";
    }

     std::string location() const { return _location; }

     friend std::ostream &operator<<(std::ostream &os, const Executive &rhs);
    
};

inline std::ostream &operator<<(std::ostream &os, const Executive &rhs) {
    os << static_cast<const Employee &>(rhs)
       << " _location: " << rhs._location;
    return os;
}

#endif // EXECUTIVE_H
