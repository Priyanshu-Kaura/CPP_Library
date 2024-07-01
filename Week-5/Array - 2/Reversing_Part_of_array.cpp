#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> &a){
    for(int i=0 ; i<a.size() ; i++){
        cout<<a[i]<<" ";
    }
}
void reversepart(int a , int b , vector<int>& v){
    for(int i=a , j=b ; i<=j ; i++ , j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
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
    int a,b;
    cout<<"Enter index from which we want to reverse : ";
    cin>>a;
    cout<<"Enter index till we want to reverse : ";
    cin>>b;
    cout<<"Array after a part is Reversed : ";
    reversepart(a , b , v);
    display(v);
}