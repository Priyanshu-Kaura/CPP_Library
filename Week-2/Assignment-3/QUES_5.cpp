#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int product = 3;
    for(int i=1 ; i<=n ; i++){
        cout<<product<<" ";
        product *= 4;
    }
}