#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a String : ";
    getline(cin , s);
    stringstream ss (s);
    vector <int> v;
    string temp;
    while(ss >> temp){
        v.push_back (stoi(temp));
    }
    sort(v.begin() , v.end());
    int x = v.size();
    cout<<"MAX:"<<v[x-1];
}