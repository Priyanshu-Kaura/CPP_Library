#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    int sum =0;
    cout<<"Enter elements of array : ";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    for(int i=0 ; i<n ; i++){
        sum += arr[i];
    }
    cout<<sum;
}