#include<iostream>
using namespace std;
int main(){
    int n , LD;
    cout<<"Enter a number : ";
    cin>>n;
    int r = 0;
    while(n>0){
        r *= 10;
        LD = n%10;
        r += LD;
        n/=10;
    }
    cout<<"REVERSE = "<<r;
}