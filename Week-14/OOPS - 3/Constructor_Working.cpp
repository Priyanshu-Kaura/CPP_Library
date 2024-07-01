#include<iostream>
using namespace std;
class A{
    private:
    int a_ka_private;

    protected:
    int a_ka_protected;

    public:
    int a_ka_public;
    A(){
        cout<<"A da Constructor call hoiya\n";
    }
};

class B : protected A{
    public:
    int b_ka_public;
    B(){
        cout<<"B da CONSTRUCTOR call hoiya\n";
    }
};

class C : public B{
    public:
    C(){
        cout<<"C da constructor call hoiya\n";
    }
};

int main(){
    C c;
}
 