#include<iostream>
using namespace std;
int main(){
    int n,LD;
    cout<<"Enter a number : ";
    cin>>n;
    int sum = 0;
    while(n>0){
        LD = n%10;
        sum += LD;
        n/=10;
    }
    cout<<"Sum of digits = "<<sum;
}