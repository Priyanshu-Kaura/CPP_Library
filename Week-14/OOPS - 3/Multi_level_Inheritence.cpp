#include<iostream>
using namespace std;
class A{
    private:    // can't be accessed , can't be inhertited
    int a_ka_private;

    protected:    // can't be accessed , can be inhertited
    int a_ka_protected;

    public:    //can be accessed , can be inherited
    int a_ka_public;
};

class B : protected A{   // a_ka_protected , a_ka_public as protected
    public:
    int b_ka_public;
};
class C : public B{    // b_ka_public as public , a_ka_protected , a_ka_public as protected 
    public: 
    int c_ka_public;
};
int main(){
    C c;
    c.b_ka_public = 10;
    c.c_ka_public = 4;
}