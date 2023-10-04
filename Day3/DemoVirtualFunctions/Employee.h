#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
class Employee
{
private:
    /* data */
public:
    Employee()=default; 
    void addplyForLeave(){
        std::cout<<"employee apply for the leave o portla \n";
    }
    virtual void payTax(){
        std::cout<<"employee pay 20% of salary as tax";
    }
    virtual void Display(){
        std::cout<<"employee details calles\n";
    }
    ~Employee() {
        std::cout<<"employee destroyed\n";
    }
};



#endif // EMPLOYEE_H
