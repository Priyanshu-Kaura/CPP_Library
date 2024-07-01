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
        if(v[i]>v[i+1]){
            cout<<"Array NOT sorted";
            break;
        }
        else{
            cout<<"Array is Sorted";
            break;
        }
    }
}