#include<iostream>
using namespace std;
int main(){
    int n , m;
    cout<<"Enter number of rows : ";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
         for(int k=n-1 ; k>=i ; k--){
            cout<<"  ";
        }
        for(int j=1 ; j<=i ; j++){
           cout<<j<<" ";
        }
        cout<<endl;
    }
}

// #include<iostream>
// using namespace std;
// int main(){
//     int n , m;
//     cout<<"Enter number of rows : ";
//     cin>>n;
//     cout<<"Enter number of columns : ";
//     cin>>m;
//     for(int i=1 ; i<=n ; i++){
//         for(int j=1 ; j<=m ; j++){
//            if((i+j)>=n+1){
//             cout<<"* ";
//            }
//            else{
//             cout<<"  ";
//            }
//         }
//         cout<<endl;
//     }
// }