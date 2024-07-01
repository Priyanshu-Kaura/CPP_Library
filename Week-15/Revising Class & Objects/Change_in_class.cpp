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

void change(Student &s){   // We put '&' to change name by pass by REFFERNCE
        s.name = "SACHIN";
    } 

int main(){
    Student s("PRIYANSHU_KAURA" , 22124076 , 92.8);
    cout<<s.name<<endl;
    change(s);
    cout<<s.name<<endl;
}