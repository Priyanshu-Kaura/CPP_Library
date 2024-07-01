#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of Rows : ";
    cin>>n;
    vector< vector<int> > v;
    for(int i=1 ; i<=n ; i++){
        vector<int> v1(i);
        v.push_back(v1);
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<=i ; j++){
            if(j==0 || i==j){
                v[i][j]=1;
            }
            else{
                v[i][j] = v[i-1][j] + v[i-1][j-1];
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<=i ; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}        