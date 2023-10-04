#ifndef MANNAGER_H
#define MANNAGER_H

#include <iostream>
#include "Employee.h"
class Mannager:public Employee
{
private:
    /* data */
public:
    Mannager()=default; 
    void addplyForLeave(){
        std::cout<<"Manager apply for lave \n";
    }
     void payTax(){
        std::cout<<"Manager pay 20% of salary as tax";
    }
   
    ~Mannager() {
        std::cout <<"Manager destroyed\n";
    }
};

#endif // MANNAGER_H
