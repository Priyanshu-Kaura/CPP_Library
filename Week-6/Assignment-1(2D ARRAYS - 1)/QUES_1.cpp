#include<iostream>
using namespace std;
int main(){  
    int n,m;
    cout<<"Enter number of rows of 1st array : ";
    cin>>n;
    cout<<"Enter number of columns of 1st array : ";
    cin>>m;
    int arr[n][m];
    cout<<"Output : "<<endl;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            arr[i][j]=10;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}