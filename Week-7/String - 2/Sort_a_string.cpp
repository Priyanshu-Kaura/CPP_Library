#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter a String : ";
    getline(cin , str);
    cout<<"SORTED STRING : ";
    sort(str.begin() , str.end());
    cout<<str;
}