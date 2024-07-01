#include<iostream>
#include<string>
using namespace std;
int main(){
    int size;
    cout<<"Enter Size of Array : ";
    cin>>size;
    string arr[size];
    string maxS = arr[0];
    cout<<"Enter elements : ";
    for(int i=0 ; i<size ; i++){
        cin>>arr[i];
    }
    int max = stoi(arr[0]);
    for(int i=0 ; i<size ; i++){
        int n = stoi(arr[i]);
        if(max<n){
            max = n;
            maxS = arr[i];
        }
    }
    cout<<"MAX : "<<maxS;
}