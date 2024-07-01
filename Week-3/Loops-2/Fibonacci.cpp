#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int FD = 1;
    int SD = 1;
    int fib = 0;
    for(int i=1 ; i<n-1 ; i++){
        fib = FD+SD;
        FD = SD;
        SD = fib;
    }
    cout<<fib;
}