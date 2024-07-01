#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Marks of a : ";
    cin>>a;
    cout<<"Marks of b : ";
    cin>>b;
    cout<<"Marks of c : ";
    cin>>c;
    if(a>=c && b>=c){
        cout<<"C is least";
    }
    else if(b>=a && c>=a){
        cout<<"A is least";
    }
    else{
        cout<<"B is least";
    }
}