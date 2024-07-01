#include<iostream>
using namespace std;
class bike{
    public:
    static int noofbikes;
    int tyresize;
    int enginesize;

    bike(int tyresize , int enginesize){
        this -> tyresize = tyresize;
        this -> enginesize = enginesize;
    }

    static void incnoofbikes(){
        noofbikes++;
    }
};

int bike::noofbikes = 10;
int main(){
    bike royalEnfield(15 ,350);
    bike bajaj(13 ,100);

    royalEnfield.incnoofbikes();
    cout<<royalEnfield.noofbikes<<endl;
    cout<<bajaj.noofbikes<<endl;

    bajaj.incnoofbikes();
    cout<<royalEnfield.noofbikes<<endl;
    cout<<bajaj.noofbikes<<endl;

    bike::incnoofbikes();
    cout<<royalEnfield.noofbikes<<endl;
    cout<<bajaj.noofbikes<<endl;

    cout<<royalEnfield.tyresize<<" "<<royalEnfield.enginesize<<endl;
    cout<<bajaj.tyresize<<" "<<bajaj.enginesize<<endl;

}