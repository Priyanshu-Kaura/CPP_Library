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
        for(int j=1 ; j<=i ; j++){
           cout<<j<<" ";
        }
        int a=i-1;
        for(int k=2 ; k<=i ; k++){
            cout<<a<<" ";
            a--;
        }
        cout<<endl;
    }
}