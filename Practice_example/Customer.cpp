#include "Customer.h"
#include "Type.h"

Customer::Customer(int id, std::string name, Type type,float customerStoreCredits)
:_id(id),_name(name),_type(type),_customerStoreCredits(customerStoreCredits) //for initialization
{

}

std::ostream &operator<<(std::ostream &os, const Customer &rhs) {
    os << "_id: " << rhs._id
       << " _name: " << rhs._name
       << " _type: " <<DisplayEnum(rhs._type)
       << " _customerStoreCredits: " <<rhs._customerStoreCredits;
    return os;
}

std::string DisplayEnum(const Type value)
{
    if(value==Type::PREMIUM)
    {
        return "premium";
    }else if(value==Type::REGULAR)
    {
        return "regular";
    }else{
        return "vip";
    }
}
