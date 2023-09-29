#include <iostream>

/*
----0*100H  |  0*104H |------
 [     1           2   -----]

*/

int main(){
    int  arr[5]={1,2,3,4,5};
    std::cout
     << "content of arr :(addres of 1st location)" 
     << arr 
     << "\n";
     std::cout 
     << "address  of first locaton: "
     <<(arr+0)  //0*100H+0*4=0*100H
     <<"\n";
      std::cout 
     << "content inside first locaton: "
     <<*(arr+0)  //0*100H+0*4=0*100H
     <<"\n";


}