#include<iostream>
using namespace std;
int main(){
    int n , LD;
    cout<<"Enter a number : ";
    cin>>n;
    int r = 0;
    int a = n;
    while(a>0){
        r *= 10;
        LD = a%10;
        r += LD;
        a/=10;
    }
    cout<<(n+r);
}