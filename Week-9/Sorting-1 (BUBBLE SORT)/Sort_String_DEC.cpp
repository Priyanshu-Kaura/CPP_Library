#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of String : ";
    cin>>n;
    vector<char> v;
    cout<<"Enter elements of String : ";
    for(int i=0 ; i<n ; i++){
        char a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=0 ; i<n-1 ; i++){  //N-1 passes
    bool flag = true;
        for(int j=0 ; j<n-1-i ; j++){
            if(v[j] < v[j+1]){
                swap(v[j] , v[j+1]); 
                flag = false;  //SWAP
            }
        }
        if(flag = false) break; // didn't swap
    }
    for(int i=0 ; i<n ; i++){
        cout<<v[i]<<" ";
    }
}