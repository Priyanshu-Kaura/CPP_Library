#include<iostream>
using namespace std;
int square(int n){
    for(int i=1 ; i<=n ; i++){
        cout<<"Square of "<<i<<" : "<<i*i<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    square(n);
}