#include<iostream>
using namespace std;
class bike{
    public:
    int tyresize;
    int enginesize;
    bike(int tyresize , int enginesize){
        this -> tyresize = tyresize;
        this -> enginesize = enginesize;
        cout<<"Constructor call hoiya\n";
    }
    ~bike(){
        cout<<"Destructor call hoiya\n";   //destructor function khatam hon to bad call hunda hai
    }
};
int main(){
    bike tvs(12,100);  //Object creation //constructor ko call jayegi
    bike honda(13,150);
    bike royalEnfield(20,300);
    
    cout<<tvs.tyresize<<" "<<tvs.enginesize<<endl;
    cout<<honda.tyresize<<" "<<honda.enginesize<<endl;
    cout<<royalEnfield.tyresize<<" "<<royalEnfield.enginesize<<endl;
    }