#include<iostream>
using namespace std;
int fact(int a){
    int fact=1;
    for(int i=a ; i>=1 ; i--){
        fact *= i;
    } 
    return fact;
}
int main(){
    int a,b;
    cout<<"Enter 1st number : ";
    cin>>a;
    for(int i=1 ; i<=a ; i++){
    cout<<"FACTORIAL of "<<i<<" : "<<fact(i)<<endl;
    }
}