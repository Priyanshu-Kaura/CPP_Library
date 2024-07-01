#include<iostream>
using namespace std;
int main(){
    float r,h;
    cout<<"Enter radius : " ;
    cin>>r;
    cout<<"Enter height : " ;
    cin>>h;
    float vol = 3.14*r*r*h;
    cout<<"Volume of cylinder : "<<vol;
}