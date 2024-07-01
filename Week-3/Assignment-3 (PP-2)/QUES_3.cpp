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
        int a=i;
        for(int j=1 ; j<=i ; j++){
           cout<<(char)(a+64)<<" ";
           a--;
        }
        for(int l=2 ; l<=i ; l++){
            cout<<(char)(l+64)<<" ";
        }
        cout<<endl;
    }
}