#include<iostream>
using namespace std;
class A{
    public:
    int a_ka_public;

    virtual void show(){
        cout<<"Mai A ka show hu\n";
    }
};

class B : public A{   
    public:
    void show(){
        cout<<"Mai B ka show hu\n";
    }
};

int main(){
   B b;
   A* a;
   a = &b;
   a -> show();
} 