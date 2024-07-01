#include<iostream>
using namespace std;
int swap(int *x , int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a , b;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;
    swap(&a,&b);
    cout<<a<<" "<<b;
}