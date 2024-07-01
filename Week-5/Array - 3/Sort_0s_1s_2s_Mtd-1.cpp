#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a){
    for(int i=0 ; i<a.size() ; i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    vector<int> v;
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    cout<<"Enter elements of array : ";
    for(int i=0 ; i<size ; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<"Array : ";
    display(v);
    cout<<endl;
    int count0 , count1 , count2;
    count0 = count1 = count2 = 0;
    for(int i=0 ; i<v.size() ; i++){
        if(v[i]==0) count0++;
        if(v[i]==1) count1++;
        if(v[i]==2) count2++;
    }
    for(int i=0 ; i<v.size() ; i++){
        if(i<count0) v[i]=0;
        else if(i<(count1+count0)) v[i]=1;
        else v[i]=2;
    }
    cout<<"SORTED ARRAY : ";
    display(v);
}