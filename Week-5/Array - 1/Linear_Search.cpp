#include<iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array : ";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    cout<<"Enter target element : ";
    cin>>x;
    bool flag = false;
    for(int i=0 ; i<n ; i++){
        if(arr[i] == x){
            flag = true;
        }   
    }
    if(flag == true){
        cout<<"Element Present";
    }
    else{
        cout<<"Element not present";
    }
}