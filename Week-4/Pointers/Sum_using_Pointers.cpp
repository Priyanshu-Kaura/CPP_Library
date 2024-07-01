#include <iostream>
using namespace std;
int main() {
    int x,y;
    int* p1 = &x;
    int* p2 = &y;
    cout<<"Enter 1st number : ";
    cin>>*p1;
    cout<<"Enter 2nd number : ";
    cin>>*p2;
    cout<<"SUM : "<<*p1 + *p2;
}