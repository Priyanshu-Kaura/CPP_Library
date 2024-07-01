#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(6);
    v.push_back(9);
    v.push_back(5);
    v.push_back(4);
    v.push_back(2);
    v.push_back(3);

    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
    cout<<v[4]<<" ";
    cout<<v[5]<<" ";

    cout<<endl;

    cout<<"SIZE : "<<v.size()<<endl;
    cout<<"CAPACITY : "<<v.capacity()<<endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();

    cout<<endl;

    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";

    cout<<endl;
    
    cout<<"SIZE : "<<v.size()<<endl;
    cout<<"CAPACITY : "<<v.capacity()<<endl;
}