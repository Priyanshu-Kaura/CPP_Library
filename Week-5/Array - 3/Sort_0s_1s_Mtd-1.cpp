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

    int count0 = 0;
    int count1 = 0;
    for(int i=0 ; i<v.size() ; i++){
        if(v[i]==0){
            count0++;
        }
        else{
            count1++;
        }
    }
    for(int i=0 ; i<v.size() ; i++){
        if(i<count0){
            v[i]=0;
        }
        else{
            v[i]=1;
        }
    }
    cout<<"SORTED ARRAY : ";
    display(v);
}