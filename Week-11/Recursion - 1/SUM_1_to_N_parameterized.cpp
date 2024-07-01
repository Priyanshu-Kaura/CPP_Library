#include<iostream>
using namespace std;
void sum1_N(int i , int n){
    if(n==0){
    cout<<"SUM : "<<i<<endl;
    return;
    }
    sum1_N(i+n , n-1);
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    sum1_N(0,n);
}