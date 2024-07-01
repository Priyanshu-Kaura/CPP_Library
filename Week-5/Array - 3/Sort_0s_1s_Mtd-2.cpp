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
    int i = 0;
    int j = v.size()-1;
    while(i<j){
        if(v[i]==0) i++;
        if(v[j]==1) j--;
        if(i>j) break;
        if((v[i]==1) && (v[j]==0)){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
    cout<<"SORTED ARRAY : ";
    display(v);
}