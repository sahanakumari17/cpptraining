#include <iostream>
class DebitCard{
    private:
    int _cvv_number;
    std::string _card_number;
    public:
     DebitCard(int cvv,std::string number) : _cvv_number(cvv),_card_number(number){
          
     }
     ~DebitCard(){
        std::cout << "debit card destroyed\n";
     }
};


class Account{
    private:
    DebitCard* obj;
    std::string _name;
    public:
    Account(DebitCard* card,std::string name) 
    : obj(card), _name(name)
    {}
    ~Account(){

    }

    friend std::ostream &operator<<(std::ostream &os, const Account &rhs) {
        os << "obj: " << rhs.obj
           << " _name: " << rhs._name;
        return os;
    }

};
int main()
{
    Account* ac1=new Account(
        new DebitCard(781,"431 55") ,"sahana");//right only lhs rhs part insid the Account() constructor
   
    std::cout<<*ac1;

    //method2,not as per the defnition
    //DebitCard* db=new DebitCard(201,"5435 56");
    //Account* ac2=new Account(db,"sahana");

}