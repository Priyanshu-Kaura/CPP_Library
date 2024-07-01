#include<iostream>
using namespace std;
int hcf(int a , int b){
    int HCF = 1;
    for(int i= min(a,b) ; i>=1 ; i--){
        if(a%i==0 && b%i==0){
            HCF=i;
            break;
        }
    }
    return HCF;
}
int main(){
    int a,b;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;
     cout<<"HCF : "<<hcf(a,b);
}