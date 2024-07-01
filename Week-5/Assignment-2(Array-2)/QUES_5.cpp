#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int> v;
    int n; 
    cout<<"Enter size of Array : ";
    cin>>n;
    cout<<"Enter elements of Array : ";
    for(int i=0 ; i<n ; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=0 ; i<v.size() ; i++){
        if(i%2==0){
           v[i] += 10;
        }
        else{
           v[i] *= 2;
        }
    }
    for(int i=0 ; i<n ; i++){
        cout<<v[i]<<" ";
    }
}