#include<iostream>
using namespace std;
int main(){  
    int n,m;
    cout<<"Enter number of rows of 1st array : ";
    cin>>n;
    cout<<"Enter number of columns of 1st array : ";
    cin>>m;

    cout<<"Enter elements of array of 1st array : ";
    int arr[n][m];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<"1st ARRAY : "<<endl;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl; 

     int a,b;
    cout<<"Enter number of rows of 2nd array : ";
    cin>>a;
    cout<<"Enter number of columns of 2nd array : ";
    cin>>b;

    cout<<"Enter elements of array of 2nd array : ";
    int brr[a][b];
    for(int i=0 ; i<a ; i++){
        for(int j=0 ; j<b ; j++){
            cin>>brr[i][j];
        }
    }
    
    cout<<"2nd ARRAY : "<<endl;
    for(int i=0 ; i<a ; i++){
        for(int j=0 ; j<b ; j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }  
     if(n==a && m==b){
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                arr[i][j] = arr[i][j] + brr[i][j];
        }
        cout<<endl;
    }
    cout<<"ADDITION : "<<endl;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
     }

}