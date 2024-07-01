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
     int x;
     cout<<"Enter targeted element : ";
     cin>>x;
     int count=0;
     for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<v.size() ; j++){
            for(int k=j+1 ; k<v.size() ; k++){
                if(v[i]+v[j]+v[k]==x){
                    cout<<"("<<i<<" , "<<j<<" , "<<k<<")"<<endl;
                    count++;
                }
            }
        }
    }
    cout<<"NUMBER OF TRIPLETS : "<<count;
}