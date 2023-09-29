#include <iostream>

class Student{
private:
    int _id;
    std::string _name;
public:
Student(int id,std::string name)
{
    this->_id=id;
    this->_name=name;
}

};

class Engineer:public Student{
    private:
    std::string _course_name;
    public:
      Egineer(int id,std::string name,std::string cname) :Student(id,name) //to transfer to parent
      {
        this->_course_name=cname;  //child requires only this
      }

      friend std::ostream &operator<<(std::ostream &os, const Egineer &rhs) {
          os << static_cast<const Student &>(rhs)
             << " _course_name: " << rhs._course_name;
          return os;
      }

};
int main(){
    Engineer* e1=new Engineer(101,"sahana","BTECh: cs");
    Student* s1=new Student(102,"sannn");
    Student* arr[2]={e1,s1};
    std::list<Student*> data1={e1,s1};
    std::vector<Student*> data2={e1,s1};
}

