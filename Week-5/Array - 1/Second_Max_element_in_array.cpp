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
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0 ; i<n ; i++){
       if(arr[i]>max){
        smax = max;
        max = arr[i];
       }
       else if(arr[i]>smax && arr[i]!=max){
        smax = arr[i];
       }
    }
    if(smax==INT_MIN){
        cout<<"There is no Second Max in array";
    }
    else{
        cout<<"Second maximum element : "<<smax;
    }
}