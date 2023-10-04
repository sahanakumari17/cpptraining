#include <iostream>
class Complex
{
private:
    /* data */
    float _real;
    float _imag;
public:
    Complex(float real,float imag) :_real(real),_imag(imag) {}
    ~Complex() {
        std::cout<<"object destroyed\n";
    }
   Complex operator+(Complex n1) //here vr returning object of type complex
    {
        //(1+2i)+(2+3i)=3+5i
         float r=this->_real+n1._real; //operands to be of samme type
         float i=this->_imag+n1._imag;
         Complex temp(r,i);
         return temp;
    }
};