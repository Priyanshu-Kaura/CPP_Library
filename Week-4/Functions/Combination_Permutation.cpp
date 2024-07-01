#include<iostream>
using namespace std;
int fact(int n){
    int product = 1;
    for(int i=1 ; i<=n ; i++){
        product *= i;
    }
    return product;
}
int main(){
    int n,r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;
    int combination = fact(n)/(fact(r)*fact(n-r));
    int permutation = fact(n)/fact(n-r);
    cout<<"COMBINATION: "<<combination<<endl<<"PERMUTATION : "<<permutation;
}