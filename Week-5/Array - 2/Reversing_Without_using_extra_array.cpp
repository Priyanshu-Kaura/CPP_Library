#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> &a){
    for(int i=0 ; i<a.size() ; i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    vector<int> v;
    cout<<"Enter elements of array : ";
    for(int i=0 ; i<5 ; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<"Array : ";
    display(v);
    cout<<endl;
    cout<<"Array in Reverse order : ";
    for(int i=0 , j=v.size()-1 ; i<=j ; i++ , j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    } 
    display(v);
}