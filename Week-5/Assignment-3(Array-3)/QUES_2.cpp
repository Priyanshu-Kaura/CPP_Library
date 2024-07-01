#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    int n; 
    cout<<"Enter size of Array : ";
    cin>>n;
    cout<<"Enter elements of Array : ";
    for(int i=0 ; i<n ; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
     int fact = 1;
     int max = INT_MIN;
     for(int i=0 ; i<n ; i++){
        if(max<v[i]){
            max = v[i];
        }
    }
    cout<<"MAX : "<<max<<endl;
    for(int i=max ; i>0 ; i--){
        fact *= i;
    }
    cout<<"FACTORIAL : "<<fact;
}