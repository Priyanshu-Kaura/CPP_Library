#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>& v){
    for(int i=0 ; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }
}
vector<int> merge(vector<int>& v1 , vector<int>& v2){
    int n = v1.size();
    int m = v2.size();
    vector<int> c(n+m);
    int i = 0;
    int j = 0;
    int k = 0;

    while(i<n && j<m){
        if(v1[i]<v2[j]){
           c[k]=v1[i]; 
           i++;
           k++;
        }
        else{
            c[k]=v2[j];
            j++;
            k++;
        }
    }
        if(i==n){
            while(j<m){
                 c[k]=v2[j];
                 k++;
                 j++;
            }
        }    
            if(j==m){
            while(i<n){
                 c[k]=v1[i];
                 k++;
                 i++;
            }
   }
   return c;
}
int main(){
    vector<int> v1;
    vector<int> v2;
    int n;
    cout<<"Enter size of 1st array : ";
    cin>>n;
    cout<<"Enter elements of 1st array : ";
    for(int i=0 ; i<n ; i++){
        int a;
        cin>>a;
        v1.push_back(a);
    }
    cout<<"ARRAY 1 : ";
    display(v1);
    cout<<endl;

    int m;
    cout<<"Enter size of 2nd array : ";
    cin>>m;
    cout<<"Enter elements of 2nd array : ";
    for(int i=0 ; i<m ; i++){
        int a;
        cin>>a;
        v2.push_back(a);
    }
    cout<<"ARRAY 2 : ";
    display(v2);
    cout<<endl;
    vector<int> v3 = merge(v1,v2);
    display(v3);
}
