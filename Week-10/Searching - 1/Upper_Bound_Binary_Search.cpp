#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,4,5,9,15,18,21,24};
    int n = 9;
    int x = 2;
    int low = 0;
    int high = n-1;
    int mid =  0;
    bool flag = false;
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid]==x){
            flag = true;
            cout<<arr[mid+1];
            break;
        }
        else if(arr[mid]<x) low = mid+1;
        else high = mid-1;
    }
    if(flag==false) cout<<arr[low];
}