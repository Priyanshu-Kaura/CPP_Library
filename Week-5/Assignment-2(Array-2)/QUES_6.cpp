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
    bool flag = false;
    for(int i=0 ; i<v.size() ; i++){
        for(int j=i+1 ; j<v.size() ; j++){
            if(v[i]==v[j]){
                flag = true;
            }    
            else{
                flag = false;
            }
        }
    }
    if(flag==true)  cout<<"Repeating elements is there";
    else   cout<<"NO Repeating elements is there";   
}