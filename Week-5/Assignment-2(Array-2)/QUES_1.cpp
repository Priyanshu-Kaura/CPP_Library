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
    int x;
    cout<<"Enter any digit : ";
    cin>>x;
    int count = 0;
    for(int i=0 ; i<n ; i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<"Number of elements strictly greater than "<<x<<" is : "<<count;
}