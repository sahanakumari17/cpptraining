#include <iostream>
#include "Director.h"
#include "Employee.h"
#include "Manager.h"

int main(){
    //any member of child class is not visible in output,v can only accsess the attrbute of parent i,e Employee not other 2

    Director* d1=new Director("d101","sahana",1,"pune",788556.0f); //instead of Employee* if v write,v cant access all the field 
    std::cout<<"object director\n";
    std::cout<<"id fro employee :"<<d1->id(); //bcox diector can also access the base class,v dont get to see the duplicate data
    std::cout<<"name from employee :"<<d1->name()<<"\n";
    std::cout<<"team size from manager :"<<d1->teamSize()<<"\n";
    std::cout<<"location from executive :"<<d1->budget()<<"\n";
    std::cout<<"budget from director :"<<d1->budget()<<"\n";

    std::cout<<"calling calculatetax inherited from manager class :"<<"\n";
    d1->Manager::CalculateTax();
    std::cout<<"\n";

     std::cout<<"calling calculatetax inherited fro manager class :"<<"\n";
    d1->Executive::CalculateTax();
     std::cout<<"\n";

      std::cout<<"calling calculatetax from Director class :"<<"\n";
    d1->Director::CalculateTax();
     std::cout<<"\n";


    std::cout<<*d1<<"\n"; //make sure that frnd function written for all,otherwse will get error
    
    delete d1;
}