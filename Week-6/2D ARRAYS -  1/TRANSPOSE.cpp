#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter number of rows : ";
    cin>>n;
    cout<<"Enter number of columns : ";
    cin>>m;

    cout<<"Enter elements of array : ";
    int arr[n][m];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<"ARRAY : "<<endl;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"TRANSPOSE : "<<endl;
    for(int j=0 ; j<m ; j++){
        for(int i=0 ; i<n ; i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}