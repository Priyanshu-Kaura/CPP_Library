// LEETCODE == 31

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>& v){
    for(int i=0 ; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int> v;
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter elements of array : ";
    for(int i=0 ; i<n ; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<"ARRAY : ";
    display(v);

    // Finding Povit idx
    int idx = -1;
    for(int i=n-2 ; i>=0 ; i--){
        if(v[i]<v[i+1]){
        idx = i;
        break;
        }
    }
    if(idx==-1){
       reverse(v.begin() , v.end());
    }
    // 2)Sorting/reverse after pivot
    reverse(v.begin()+idx+1 , v.end());

    //3) Finding just greater element than idx
    int j = -1;
    for(int i=idx+1 ; i<n ; i++){
        if(v[i]>v[idx]){
            j = i;
            break;
        }
    } 
    //3) swaping idx and just greater element than idx (j)
    int temp = v[idx];
    v[idx] = v[j];
    v[j] = temp;

    cout<<endl;
    display(v);
}