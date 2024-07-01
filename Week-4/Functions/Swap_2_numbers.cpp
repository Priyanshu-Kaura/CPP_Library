#include<iostream>
using namespace std;
int swap(int a , int b){
    int temp = a;
    a = b;
    b = temp;
    cout<<a<<" , "<<b;
}
int main(){
    int a,b;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;
    swap(a,b);
}