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

    cout<<"SORTED ARRAY : ";
    for(int i=0 ; i<n-1 ; i++){
        int min = i;
        for(int j=i+1 ; j<n ; j++){
            if(arr[j] < arr[min]) min = j;
        }
        if(min != i) swap(arr[i] , arr[min]);
    }
    for(int ele : arr){
        cout<<ele<<" ";
    }
}