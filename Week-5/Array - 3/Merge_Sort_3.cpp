// 1st array = [1 , 2 , 3 , 0 , 0 , 0]
// 2nd array =[2 , 5 , 6]
// ANS = [1 , 2 , 3 , 2 , 5 , 6]
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
    int i = n-3;
    int j = m-1;
    int k = n-1;

    while(i>=0 && j>=0){
        if(v1[i]>v2[j]){
           c[k]=v1[i]; 
           i--;
           k--;
        }
        else{
            c[k]=v2[j];
            j--;
            k--;
        }
    }
        if(i==0){
            while(i>=0){
                 c[k]=v1[i];
                 k--;
                 i--;
            }
        }    
            if(j==0){
            while(j>=0){
                 c[k]=v2[j];
                 k--;
                 j--;
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
