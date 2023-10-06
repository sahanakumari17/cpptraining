#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h"
#include <ostream>

class Manager :virtual public Employee
{
private:
    /* data */
    int _team_size;
public:
    Manager(std::string id,std::string name,int teamsize)
    :Employee(id,name),_team_size(teamsize) {}
    //in a base class is virtual, then child class distructor marked as a virtual
    
   virtual ~Manager() {
         std::cout<<"manager destroyed\n"; 
    }
    void CalculateTax() override{
        std::cout<<"manager pays 20% of tax\n";
    }

    int teamSize() const { return _team_size; }

   // int teamSize() const { return _team_size; }

    friend std::ostream &operator<<(std::ostream &os, const Manager &rhs);
    
};

inline std::ostream &operator<<(std::ostream &os, const Manager &rhs) {
    os << static_cast<const Employee &>(rhs)
       << " _team_size: " << rhs._team_size;
    return os;
}

#endif // MANAGER_H
