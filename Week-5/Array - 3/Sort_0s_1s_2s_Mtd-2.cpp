#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
    for(int i=0 ; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int> v;
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter elements of array : ";
    for(int i=0 ; i<n ; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<"ARRAY : ";
    display(v);
    cout<<endl;

    int low = 0;
    int mid = 0;
    int high = v.size()-1;
    while(mid<=high){
        if(v[mid]==2) {
            int temp = v[mid];
            v[mid] = v[high];
            v[high] = temp;
            high--;
        }
        else if(v[mid]==0){
            int temp = v[mid];
            v[mid] = v[low];
            v[low] = temp;
            low++;
            mid++;
        }
        else{
            mid++;
        }
}
    display(v);
}