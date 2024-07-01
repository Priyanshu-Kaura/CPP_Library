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
            if(i<j){
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;  
            }
        }
    }
    cout<<"ROTATED 90 ANTI-CLOCKWISE : "<<endl;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<arr[n-1-i][j]<<" ";
        }
        cout<<endl;
    }
}   