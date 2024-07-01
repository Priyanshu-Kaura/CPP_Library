#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
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
     vector<int> reverse(v.size());
     bool flag = true;
    for(int i=0 ; i<v.size() ; i++){
       reverse[i] = v[v.size()-1-i];
    } 
    for(int i=0 ; i<v.size() ; i++){
       if(v[i]!=reverse[i]){
        flag = false;
        break;
    }  
    } 
    if(flag==true)  cout<<"PALINDROME";
    else cout<<"NO PALINDROME";
}