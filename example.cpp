#include <iostream>
class Chef{
    public:
           void makeChicken(){
            std::cout<<"chef makes chicken\n";

           }
           void makeSpecialDish(){
            std::cout<<"chef makes bbq \n";
           }
};
class ItalianChef :public Chef{
    public:
        void makePasta(){
            std::cout<<"italian chef makes pasta\n";
        }
        void makeSpecialDish(){
            std::cout<<"Italian chef makes bbq \n";
           }

};

int main(){
    Chef c;
    c.makeChicken();
    c.makeSpecialDish();
    ItalianChef  i;
    i.makeChicken();
    i.makeSpecialDish();
    i.makePasta();
}