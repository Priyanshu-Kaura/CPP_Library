#include<iostream>
using namespace std;
float circle(float r){
    return 3.14*r*r;
}
int main(){
    float r;
    cout<<"Enter a radius : ";
    cin>>r;
    cout<<"Area of Circle : "<<circle(r);
}