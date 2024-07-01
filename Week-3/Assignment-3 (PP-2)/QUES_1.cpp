#include<iostream>
using namespace std;
int main(){
    int n , m;
    cout<<"Enter number of rows : ";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        for(int k=n-1 ; k>=i ; k--){
            cout<<"  ";
        }
        for(int j=1 ; j<=2*i-1 ; j++){
           cout<<j<<" ";
        }
        cout<<endl;
    }
}