#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string : ";
    getline(cin , s);
    vector<string> v;
    stringstream ss(s);
    string temp;
    while(ss>>temp){
       v.push_back(temp);
    }
    cout<<endl;
    sort(v.begin() , v.end());
    int maxcount = 0;
    int count = 0;
    for(int i=0 ; i<v.size() ; i++){
        if(v[i]==v[i+1]) count++;
        else count = 1;
        maxcount = max(maxcount , count);
    }
    count = 1;
    for(int i=0 ; i<v.size() ; i++){
        if(v[i]==v[i+1]) count++;
        else count = 1;
        if(maxcount == count){
            cout<<v[i]<<" - "<<maxcount<<endl;
        }
    }
}