#include<iostream>
using namespace std;
int main(){
    int n , m;
    cout<<"Enter number of rows : ";
    cin>>n;
    cout<<"Enter number of columns : ";
    cin>>m;
    int nst = 1;
    int nsp = n-1;
    for(int i=1 ; i<=n ; i++){
        //SPACES
          for(int j=1 ; j<=nsp ; j++){
           cout<<"  ";
        }
        nsp--;
        for(int k=1 ; k<=nst ; k++){
            cout<<"* ";
        }
        nst += 2;
        cout<<endl;
    }
}