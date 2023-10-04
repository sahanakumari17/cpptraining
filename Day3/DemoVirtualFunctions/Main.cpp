#include <iostream>
#include "Mannager.h"
#include "Employee.h"
int main(){
    Employee* arr[2];
    arr[0]=new Employee();
    arr[1]=new Mannager();
 //employee version of function called bcoz applyforleave is non-virtual
    arr[0]->addplyForLeave();
    arr[1]->addplyForLeave();

    //version specific to the type of object called bcoz paytax is virtual
    arr[0]->payTax();
    arr[1]->payTax();

 //employee version of function called bcoz there is no Display in child class manager
    arr[0]->Display();
    arr[1]->Display();

    //twice employee object only will destroyed
    delete arr[0];
    delete arr[1];
}