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

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            
        }
    }
    cout<<"ARRAY in Wave form : "<<endl;
    for(int j=0 ; j<n ; j++){
        for(int i=n-1 ; i>=0 ; i--){
            if(j%2!=0){
                cout<<arr[n-1-i][j]<<" ";
            }
            else{
                cout<<arr[i][j]<<" ";
            }
        }
    }
}   