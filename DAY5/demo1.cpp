/*

writing code for developers who will use this library

*/

 

#include<iostream>



float square(float number){

        return number*number;

    }

    float percentage(float number,float pct_factor){

        return number*(pct_factor/100);

    }

    float cube(float number){

        return number*number*number;

    }

    int factorial(int number){

        if(number<0){

            throw std::runtime_error("Negative number");

        }

        else  if(number==1){

            return 1;

        }

        else {

            return number*factorial(number-1);

        }

    }
    void SwitchMenu(){
        while(true)
        {   std::cout<<"menu \n 1)square\n2)cube\n3)factoriial\n4)exit\n";
            int choice=0;
            std::cout<<"enter a number\n";
            float number;
            std::cin>>number;
            std::cout<<"enter 1 for square\n 2 for cube \n 3 for Factorial\n";
            std::cin>>choice;
            switch (choice)

            {
            case 1:/* constant-expression */
                /* code */
                square(number);
                break;
            case 2:
                cube(number);
                break;
            case 3:
            try{
               factorial(static_cast<int>(number)); 
               }//explicit type casting in c++
               catch(std::runtime_error&ex){
                std::cout<<ex.what()<<"\n";   //add try catch bcoz of explicit type castng
               }
                break;
            
            case 4:
                exit(0);  
            default:
             std::cout<<"invalid choice\n";
             break;

        }

    }
    }
    int main()
    {
        SwitchMenu();

   

   }
