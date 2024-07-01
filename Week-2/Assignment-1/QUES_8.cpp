#include<iostream>
using namespace std;
int main(){
    int x1,x2,x3,y1,y2,y3,slope1,slope2;
    cout<<"Enter 1st Point : ";
    cin>>x1>>y1;
    cout<<"Enter 2nd Point : ";
    cin>>x2>>y2;
    cout<<"Enter 3rd Point : ";
    cin>>x3>>y3;
    slope1 = (y2-y1)/(x2-x1);
    slope2 = (y3-y2)/(x3-x2);
    if(slope1==slope2){
        cout<<"Points lies in straight line";
    }
    else{
        cout<<"Points not lies in straigt line";
    }
}