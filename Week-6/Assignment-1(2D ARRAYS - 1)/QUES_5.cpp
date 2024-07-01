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
    int maxsumrow = INT_MIN;
    int max_sum = 0;
    for(int i=0 ; i<n ; i++){
        int rowsum = 0;
        for(int j=0 ; j<m ; j++){
            rowsum += arr[i][j];
        }
        if(max_sum < rowsum){
            max_sum=rowsum;
            maxsumrow = i;
        }
    }
    cout<<"MAXIMUM SUM ROW : "<<maxsumrow+1;
}