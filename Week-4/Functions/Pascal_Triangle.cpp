#include<iostream>
using namespace std;
int fact(int n){
    int product = 1;
    for(int i=1 ; i<=n ; i++){
        product *= i;
    }
    return product;
}
int combination(int n , int r){
    int combination = fact(n)/(fact(r)*fact(n-r));
}
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    for(int i=0 ; i<=n ; i++){
        for(int k=n ; k>=i ; k--){
            cout<<"  ";
        }
        for(int j=0 ; j<=i ; j++){
            cout<<combination(i,j)<<"  ";
        }
        cout<<endl;
    }
}