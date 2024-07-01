#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter a String : ";
    getline(cin , str);
    int count=0;
    int n=str.size();
    for(int i=0 ; i<n ; i++){
        if(n==1) break;
        else if(i==0){
            if(str[i]!=str[i+1]) count++;
        }
        else if(n==2 && str[0]!=str[1]){
            count=1;
            break;
        }
        else if(i==n){
            if(str[i]!=str[i-1]) count++;
        }
        else if(str[i-1]!=str[i] && str[i+1]!=str[i]) count++;
    }
    cout<<"Number of times the neighbouring characters are different from each other : "<<count;
}