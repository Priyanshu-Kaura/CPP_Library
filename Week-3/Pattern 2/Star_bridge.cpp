#include<iostream>
using namespace std;
int main(){
    int n , m;
    cout<<"Enter number of rows : ";
    cin>>n;
    for(int x=1 ; x<=2*n-1 ; x++){
        cout<<"* ";
   }
   cout<<endl;
    for(int i=1 ; i<=n-1 ; i++){
        for(int j=n-1 ; j>=i ; j--){
            cout<<"* ";
        }

        for(int k=1 ; k<=2*i-1 ; k++){
            cout<<"  ";
        }

        for(int l=n-1 ; l>=i ; l--){
            cout<<"* ";
        }
        cout<<endl;
    }
}