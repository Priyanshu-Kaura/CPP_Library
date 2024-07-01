#include<iostream>
#include<limits.h>
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
    
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(max<arr[i][j]){
                smax = max;
                max=arr[i][j];
            }
            else if(arr[i][j]>smax && arr[i][j]!=max){
                smax = arr[i][j];
            }
        }
    }
    if(smax==INT_MIN) cout<<"No Second largest element";
    else cout<<"Maximum element : "<<smax;
}