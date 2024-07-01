#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    cout<<"Enter elements of array : ";
    for(int i=0 ; i<8 ; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    vector<int> v2(v.size());
    cout<<"Array in Reverse order : ";
    for(int i=0 ; i<v.size() ; i++){
        v2[i]=v[v.size()-1-i];
        cout<<v2[i]<<" ";
    }
}