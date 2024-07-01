#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array : ";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    bool flag = false;
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(arr[i]==arr[j]){
                flag = true;
            }
        }
    }
    if(flag==true){
        cout<<"Array contains duplicates";
    }
    else{
         cout<<"Array not contains duplicates";
    }
}