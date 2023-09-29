int main(){
    int n1=10;
    int* ptr=&n1;
    int **sptr=&ptr;

    //data inside n1
    std::cout << "data inside na: "<< n1 <<"\n";
    std::cout << "data inside sptr"<<sptr<<"\n";
    std::cout << " jump ptr 1 time:"<<*ptr<<"\n";
    std::cout << "Double ** jump sptr"<<**sptr<<"\n";
    
    //address of n1
    std::cout <<"address of n1 :"<<&n1<<"\n";
    std::cout<<"address of ptr :"<<&ptr<<"\n";
    std::cout<<"address of sptr :"<<&sptr<<"\n";
    
    }