#include <iostream>
//call by value:copy passed parameter into formal parameter
/*
void magic(int n1)
{
    std::cout << "Address of n1: " << &n1<<"\n";
    std::cout << "Content in n1 :" <<n1 <<"\n"; 
    n1=100;
    std::cout << "After modification :" << n1 <<"\n";


}
*/

//call by reference ony change from call by value is puttng &,vr just refering the same data with altrnative name,nothing is copied here
//drawback is old data is not maintained vr making changes to the same data
void magic(int& n1)
{
    std::cout << "Address of n1: " << &n1<<"\n";
    std::cout << "Content in n1 :" <<n1 <<"\n"; 
    n1=100;
    std::cout << "After modification :" << n1 <<"\n";


}

/*
int &ptr //left side of & hasa datatype so reference
&ptr; //no datatype so pointer
*/
int main(){
  int n1=10;
 // magic(10); //10 wll be copied into scope of magic
  magic(n1); //n1 will be copied into space of magic
  std::cout<< "Value i main after calling magic :"<<n1<<"\n";
}