#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s ="leetcode";
    vector <int> v(26,0);
    for(int i=0 ; i<s.length() ; i++){
        char ch = s[i];
        int ascii = (int)ch;
        v[ascii-97]++;
    }
    int max=0;
    int idx=-1;
    for(int i=0 ; i<v.size() ; i++){
        if(max<v[i]){
            max = v[i];
            idx=i;
        }
    }
 cout<<max<<" "<<(char)(idx+97);
}