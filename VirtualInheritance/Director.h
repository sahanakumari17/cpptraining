#ifndef DIRECTOR_H
#define DIRECTOR_H
#include "Executive.h"
#include "Manager.h"
#include <ostream>



//it is most derived class so dont use virual keyword
//multple inheritance dont take as first option

/*
in multiple inheritance in cpp,most derived class(director) is responsible for instantiation the base class (Employee)*/
class Director:public Manager,public Executive
{
private:
    /* data */
    float _budget;
public:
    Director(std::string id,std::string name,int teamsize,std::string location,float budget)
    :Employee(id,name) ,Manager(id,name,teamsize),Executive(id,name,location),_budget(budget){}
    ~Director() {
        std::cout<<"director destroyed\n";
    }
    void CalculateTax()
    {
        std::cout<<"director pays 50% of tax bcoz of rich ppl\n";
    }

    float budget() const { return _budget; }

    friend std::ostream &operator<<(std::ostream &os, const Director &rhs);
    
};

inline std::ostream &operator<<(std::ostream &os, const Director &rhs) {
    os << static_cast<const Manager &>(rhs)
       << static_cast<const Executive &>(rhs)
       << " _budget: " << rhs._budget;
    return os;
}

#endif // DIRECTOR_H
