#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter year : ";
    cin>>year;
    if(year%400==0){
        cout<<"Year is leap";
    }
    else if(year%100==0){
        cout<<"Year is not leap";
    }
    else if(year%4==0){
        cout<<"Year is leap";
    }
    else{
        cout<<"Year is not leap";
    }
}