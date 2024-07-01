#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    cout<<"Enter elements of array : ";
    for(int i=0 ; i<size ; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"SORTED ARRAY : ";
    sort(v.begin() , v.end());
    for(int i=0 ; i<=v.size() ; i++){
        cout<<v.at(i)<<" ";
    }

}