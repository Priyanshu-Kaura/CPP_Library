#include<iostream>
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
    int max = arr[0];
    for(int i=0 ; i<n ; i++){
       if(arr[i]>max){
        max = arr[i];
       }
    }
    cout<<"Maximum element : "<<max;
}