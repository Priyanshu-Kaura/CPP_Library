#include<iostream>
#include<vector>
using namespace std;
bool search(vector< vector<int> >& v , int x){
    int rows = v.size();
    int cols = v[0].size();
    int i = 0;
    int j = cols - 1;
    while(i<rows && j>=0){
        if(v[i][j]==x) return true;
        else if(v[i][j] > x) j--;
        else i++;
    } 
    return false;
}
int main(){
    int n,x;
    cout<<"Enter number of Rows : ";
    cin>>n;
    vector< vector<int> > v;
    for(int i=0 ; i<n ; i++){
        vector<int> v1;
        for(int j=0 ; j<n ; j++){
            int a;
            cin>>a;
             v1.push_back(a);
        }
        v.push_back(v1);
    }
    cout<<"Enter target element : ";
    cin>>x;
    cout<<search(v,x);
}