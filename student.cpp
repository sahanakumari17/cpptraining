#include <iostream>
#include "department.h"

class Student  //click classi
{
private:
    /* data */
    int _roll_number;
    std::string _name;
    float _fees;
    char _grade;
     Department _dept; //IT ,CS,AI_ML USE ENUM TO CREATE FIXED NUMBER OF DATA
public:
    Student() =default;
    Student(int rnum,
    std::string name,
    float fees,
    char grade,
    Department dept)
    {
        this->_name=name;
        this->_fees=fees;
        this->_roll_number=rnum;
        this->_grade=grade;
        this->_dept=dept;
    }
    ~student() {
        std::cout << "Student with roll number :"
        <<this->_roll_number
        <<" is now destroyed\n";
    }
};
int main(){
    //stack
    Student s1(101,"sahana",8999.0f,'B',Department::CS);
     Student s3(101,"sann",7899.0f,'C',Department::CS);

    //heap
  Student* s2= new    Student(202,"shri",77884.0f,'B',Department::AI_ML);
  Student* s4= new    Student(202,"shri",77884.0f,'B',Department::AI_ML);
  delete s2;
   //for manual
 Student arr[2]={s1,s2};//array of stack allocated student obkjects ,b
 Student* heapArr[2]={s2,s4}; //array of heap
}