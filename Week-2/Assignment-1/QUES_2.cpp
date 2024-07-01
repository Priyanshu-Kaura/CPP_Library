#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter radius : ";
    cin>>r;
    int area = 3.14*r*r;
    int circum = 2*3.14*r;
    if(area>circum){
        cout<<"Area > Perimeter";
    }
    else{
        cout<<"Area < Perimeter";
    }
}