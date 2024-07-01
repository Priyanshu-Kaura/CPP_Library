#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter a String : ";
    getline(cin , s);
    cout<<s.substr((s.size())/2);
}