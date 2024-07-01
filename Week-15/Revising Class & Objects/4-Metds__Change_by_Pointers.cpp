#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    int marks;

    Student(string name , int rno , int marks){
        this -> name = name;
        this -> rno = rno;
        this -> marks = marks;
    }
};

void change(Student* s){   // We put '&' to change name by pass by REFFERNCE
        s -> name = "SACHIN";
    } 

int main(){
    Student s("PRIYANSHU_KAURA" , 22124076 , 92.8);
    
    // 1st Method : 

    cout<<s.name<<endl;
    change(&s);
    cout<<s.name<<endl;

    //"s.name  &  ptr -> name" are same

    // 2nd Method : 
    Student* ptr = &s;
    cout<<ptr -> name<<endl;
    ptr -> name = "LAOLI";
    cout<<ptr -> name<<endl;

    //3rd Method : 
    cout<<s.name<<endl;
    change(ptr);
    cout<<s.name<<endl;

    // 4th Method : 
    // Student* s = new Student("ABHIJIT" , 22124080 , 90.2);
    // cout<<s->name<<endl;
    // change(s);
    // cout<<s->name<<endl;
}