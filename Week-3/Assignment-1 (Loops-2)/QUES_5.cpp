#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int sum=0;
    while(n>0){
        int x=n%10;
        if(x%2==0){
            sum += x;
        }
        n /= 10;
    }
    cout<<sum;
}