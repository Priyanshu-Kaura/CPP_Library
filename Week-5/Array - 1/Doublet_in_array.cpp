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
    int x;
    cout<<"Enter any number : ";
    cin>>x;
    for(int i=0 ; i<v.size()-1 ; i++){
        for(int j=i+1 ; j<v.size() ; j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}