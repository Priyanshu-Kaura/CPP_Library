#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;

    cout<<"Enter elements of array : ";
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

    for(int j=0 ; j<n ; j++){
        for(int i=0 ; i<n ; i++){
            if(i<j){
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"ARRAY ROTATED By 90 : "<<endl;
    for(int k=0 ; k<n ; k++){     //Traversing through rows
        int i=0;
        int j=n-1;
        while(i<j){
            int temp = arr[k][i];
            arr[k][i] = arr[k][j];
            arr[k][j] = temp;
            i++;
            j--;
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}