#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> &a){
    for(int i=0 ; i<a.size() ; i++){
        cout<<a[i]<<" ";
    }
}   
int main(){
    vector<int> height;
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter elements of array : ";
    for(int i=0 ; i<n ; i++){
        int a;
        cin>>a;
        height.push_back(a);
    }
    cout<<"ARRAY : ";
    display(height);

    //Previous greatest element array
    int prev[n];
    prev[0] = -1;
    int max = height[0];
    for(int i=1 ; i<n ; i++){
        prev[i] = max;
        if(max<height[i])  max = height[i];
    }

    //next greatest element array in previous array
    prev[n-1] = -1;
    max = height[n-1];
    for(int i=n-2 ; i>=0 ; i--){
        if(max<prev[i])   prev[i] = max;
        if(max<height[i])   max = height[i];
    } 

    //calculatig water
    int water = 0;
    for(int i=1 ; i<n-1 ; i++){
        if(height[i]<prev[i]){
            water += (prev[i] - height[i]);
        }
    }
    cout<<endl<<"WATER TRAPED : "<<water;
}