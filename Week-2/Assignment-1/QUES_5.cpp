#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter side a : ";
    cin>>a;
    cout<<"Enter side b : ";
    cin>>b;
    cout<<"Enter side c : ";
    cin>>c;
    if(a==b && b==c){
        cout<<"Triangle is Equilaterial";
    }
    else if(a!=b && b!=c && c!=a){
        cout<<"Triangle is Scalene";
    }
    else{
        cout<<"Triangle is Isosceles";
    }
}