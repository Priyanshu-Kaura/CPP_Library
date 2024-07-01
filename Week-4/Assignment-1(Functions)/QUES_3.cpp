#include<iostream>
using namespace std;
int odd(int a , int b){
    for(int i=a ; i<=b ; i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int a,b;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;
    odd(a,b);
}