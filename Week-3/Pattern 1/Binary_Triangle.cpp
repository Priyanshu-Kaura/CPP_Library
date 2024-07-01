#include<iostream>
using namespace std;
int main(){
    int n , m;
    cout<<"Enter number of rows : ";
    cin>>n;
    int a = 5;
    for(int i=1 ; i<=n ; i++){
        if(i%2==0){
                a=0;
            }
            else{
                a=1;
            }
        for(int j=1 ; j<=i ; j++){
            cout<<a<<" ";
            //flipping
            if(a==0){
                a=1;
            }
            else{
                a=0;
            }
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
//     for(int i=1 ; i<=n ; i++){
//         for(int j=1 ; j<=i ; j++){
//             if(i==j || (i%2==0 && j%2==0) || (i%2!=0 && j%2!=0)){  // i==j or (i+j)%2==0 then print 1
//                 cout<<"1 ";
//             }
//             else{
//                 cout<<"0 ";
//             }
//         }
//         cout<<endl;
//     }
// }