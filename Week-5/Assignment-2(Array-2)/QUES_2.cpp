#include<iostream>
#include<vector>
#include<climits>
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
    int max = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;
    for(int i=0 ; i<v.size() ; i++){
        if(max<v[i]){
            max3 = max2;
            max2 = max;
            max = v[i];
        }
        else if(max2<v[i] && v[i]!=max){
            max2 = v[i];
        }
        else if(max3<v[i] && v[i]!=max && v[i]!=max2){
            max3 = v[i];
        }
    }
    cout<<"FIRST MAX : "<<max<<endl;

             if(max2==INT_MIN){
        cout<<"There is no SECOND MAX"<<endl;
    }
    else{
        cout<<"SECOND MAX : "<<max2<<endl;
    }
    if(max3==INT_MIN){
        cout<<"There is no THIRD MAX"<<endl;
    }
    else{
        cout<<"THIRD MAX : "<<max3<<endl;
    }
}