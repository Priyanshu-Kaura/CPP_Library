#include<iostream>
using namespace std;
int main() {
float x, y;
cout("Enter the x-y coordinates : ");
cin >> x >> y;
if(x == 0 && y == 0){
    cout << "The point is on the origin.";
}
if (x == 0 && y != 0){
    cout << "The point lie on the y-axis.";
}
if (x != 0 && y == 0){
    cout << "The points lie on the x-axis.";
}
if (x != 0 && y != 0){
    cout << "The points lie on the plane.";
}
}