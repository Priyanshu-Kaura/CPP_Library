//push zoeres to the end while maintaining the relative order of other elements.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter elements of array : ";
    for(int i=0 ; i<n ; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    
    for(int i=0 ; i<n-1 ; i++){  //N-1 passes
    bool flag = true;
        for(int j=0 ; j<n-1-i ; j++){
            if(v[j] == 0){
                swap(v[j] , v[j+1]); 
                flag = false;  //SWAP
            }
        }
        if(flag = false) break; // didn't swap
    }
    for(int i=0 ; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }
}