#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string : ";
    getline(cin , s);
    stringstream ss(s);
    string temp;
    int count = 0;
    while(ss>>temp){
        cout<<temp<<endl;
        count++;
    }
    cout<<count;
}