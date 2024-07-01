#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    cout<<"Enter elements of array : ";
    for(int i=0 ; i<7 ; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int x;
    cout<<"Enter a Target element : ";
    cin>>x;
    for(int i=v.size() ; i>0 ; i--){
        if(v[i]==x){
            cout<<i;
            break;
        }
    }
}