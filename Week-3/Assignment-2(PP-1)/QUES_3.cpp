#include<iostream>
using namespace std;
int main(){
     int n , m;
    cout<<"Enter number of rows : ";
    cin>>n;
    cout<<"Enter number of columns : ";
    cin>>m;
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=i ; j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
}