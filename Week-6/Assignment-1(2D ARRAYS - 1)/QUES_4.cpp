#include<iostream>
#include<climits>
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
    
    cout<<"ARRAY : "<<endl;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl; 
    int max = INT_MIN;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(max<arr[i][j]){
                max = arr[i][j];
            }
        }
    }
    cout<<"MAXIMUM ELEMENT : "<<max;
}