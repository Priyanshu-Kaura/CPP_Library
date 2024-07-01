#include<iostream>
#include<climits>
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
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(max<arr[i][j]){
                max = arr[i][j];
            }
        }
    }
    cout<<"Maximum element : "<<max;
}