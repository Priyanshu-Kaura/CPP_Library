#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main(){
    int arr[5] = {19 , 12 , 23 , 0 , 16};
    int n = 5;
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int> v(n , 0);
    int x = 0;
    for(int i=0 ; i<n ; i++){
        int min = INT_MAX;
        int minIdx = -1;
        for(int j=0 ; j<n ; j++){
            if(v[j]==1) continue;
            else{
                if(arr[j] < min){
                    min = arr[j];
                    minIdx = j;
                }
            }
        }
        v[minIdx] = 1;
        arr[minIdx] = x;
        x++;
    }
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}