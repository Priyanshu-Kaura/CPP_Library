#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter a String : ";
    getline(cin , s);
    cout<<"After reversing : ";
    reverse(s.begin() , s.begin()+(s.size()/2));
    cout<<s<<endl;
}