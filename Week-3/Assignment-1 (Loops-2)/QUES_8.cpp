#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int FD = 1;
    int SD = 1;
    int fib = 0;
    cout<<FD<<" "<<SD<<" ";
    for(int i=2 ; i<n ; i++){
        fib = FD+SD;
        FD = SD;
        SD = fib;
        cout<<fib<<" ";
    }
}