#include<iostream>
using namespace std;
int main(){
    for(int i=1 ; i<=500 ; i++){
    int a = i;
    int sum = 0; 
    while(a>0){
       int x = a % 10;
        sum += x*x*x;
        a /= 10;
    }
    if(i==sum){
        cout<<i<<endl;
    }
    }
}
   