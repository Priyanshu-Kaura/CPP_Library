#include<iostream>
using namespace std;
int main(){
    int n , m;
    cout<<"Enter number of rows : ";
    cin>>n;
    for(int x=1 ; x<=2*n-1 ; x++){
        cout<<x<<" ";
   }
   cout<<endl;
    for(int i=1 ; i<=n-1 ; i++){
        int a=1;
        for(int j=n-1 ; j>=i ; j--){
            cout<<a<<" ";
            a++;
        }

        for(int k=1 ; k<=2*i-1 ; k++){
            cout<<"  ";
            a++;
        }

        for(int l=n-1 ; l>=i ; l--){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}