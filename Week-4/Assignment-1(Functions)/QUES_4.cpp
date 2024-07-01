#include<iostream>
using namespace std;
int square(int n){
    return n*n;
}
int NumberOfDigits(int n){
    int count=0;
    while(n>0){
        count++;
        n /= 10;
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int Number_of_Digits = NumberOfDigits(n);
    cout<<square(Number_of_Digits);
}