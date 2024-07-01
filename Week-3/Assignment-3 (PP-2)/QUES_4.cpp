#include<iostream>
using namespace std;
int main(){
    int n , m;
    cout<<"Enter number of rows : ";
    cin>>n;
    for(int i=1 ; i<=2*n-1 ; i++){
        cout<<(char)(i+64)<<" ";
    }
    cout<<endl;
    for(int i=1 ; i<=n-1 ; i++){
        int a=1;
        for(int j=n-1 ; j>=i ; j--){
            cout<<(char)(a+64)<<" ";
            a++;
        }
        for(int k=1 ; k<=2*i-1 ; k++){
            cout<<"  ";
            a++;
        }
        for(int l=n-1 ; l>=i ; l--){
            cout<<(char)(a+64)<<" ";
            a++;
        }
        cout<<endl;
    }
}