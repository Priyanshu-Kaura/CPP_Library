#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    int product = 1;
    cout<<"Enter elements of array : ";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    for(int i=0 ; i<n ; i++){
        product *= arr[i];
    }
    cout<<"PRODUCT : "<<product;
}