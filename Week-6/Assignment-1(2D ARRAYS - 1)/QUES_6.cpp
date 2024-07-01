#include<iostream>
#include<climits>
using namespace std;
int main(){  
    int n;
    cout<<"Enter number of rows of array : ";
    cin>>n;
    cout<<"Enter elements of array of array : ";
    int arr[n][n];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<"ARRAY : "<<endl;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl; 
    int mid = n/2;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(i==mid || j==mid){
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}