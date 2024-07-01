#include<iostream>
using namespace std;
class A{
    private:    // can't be accessed , can't be inhertited
    int a_ka_private;

    protected:    // can't be accessed , can be inhertited
    int a_ka_proctected;

    public:    //can be accessed , can be inherited
    int a_ka_public;
};

class B : public A{
    public:
    int b_ka_public;
};
int main(){
    B b;
    int b_ka_protected = 10;
}