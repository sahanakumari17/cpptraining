#include <iostream>
int main(){
    int n1=0,n2=1,n3;
    int n=3;
    std::cout<<n1<<" "<<n2<<" ";
    while(n>0)
    {    
        
        n1=n2;
        n2=n3;
        n3=n1+n3;
     std::cout<<n3;
    }

}