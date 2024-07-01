#include<iostream>
using namespace std;
int main(){  
    int n,m;
    cout<<"Enter number of rows of array : ";
    cin>>n;
    cout<<"Enter number of columns of array : ";
    cin>>m;

    cout<<"Enter elements of array of array : ";
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
    int a,b,p,q;
    cout<<"Enter 1st coordinates : ";
    cin>>a>>b;
    cout<<"Enter 2nd coordinates : ";
    cin>>p>>q;
    int sum = 0;
    for(int i=a ; i<=p ; i++){
        for(int j=b ; j<=q ; j++){
            sum += arr[i][j];
        }
    }
    cout<<"SUM : "<<sum;
}