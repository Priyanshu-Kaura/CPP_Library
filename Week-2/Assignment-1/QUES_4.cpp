#include<iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"Enter Length : ";
    cin>>l;
    cout<<"Enter Breadth : ";
    cin>>b;
    int area = l*b;
    int circum = 2*(l+b);
    if(area>circum){
        cout<<"Area > Perimeter";
    }
    else{
        cout<<"Area < Perimeter";
    }
}