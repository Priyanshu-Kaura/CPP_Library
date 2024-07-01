#include<iostream>
using namespace std;
int main(){
    int n , m;
    cout<<"Enter number of rows : ";
    cin>>n;
    for(int i=1 ; i<=2*n-1 ; i++){
        int a=i;
        if(i>n){
           a = 2*n-i;
        }
        cout<<a<<" ";
    }
    cout<<endl;
    for(int i=1 ; i<=n-1 ; i++){
        for(int j=n-1 ; j>=i ; j--){
            cout<<n-j<<" ";
        }
        for(int k=1 ; k<=2*i-1 ; k++){
            cout<<"  ";
        }
        for(int l=n-i ; l>=1 ; l--){
            cout<<l<<" ";
        }
        cout<<endl;
    }
}