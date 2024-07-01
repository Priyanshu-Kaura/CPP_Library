#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;
    int *ptr1 = &a;
    int *ptr2 = &b;
    int product;
    int *ptrproduct = &product;
    *ptrproduct = (*ptr1)*(*ptr2);
    cout<<"PRODUCT : "<<*ptrproduct;
}
