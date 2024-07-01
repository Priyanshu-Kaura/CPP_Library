#include<iostream>
#include<climits>
using namespace std;
float max(int a,int b){
    if(a>=b) return a;
    else return b;
}

float min(int a,int b){
    if(a<=b) return a;
    else return b;
}

int main(){
    int arr[] = {5 , 3 , 6 , 8};
    int n = 3;
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    float kmin = (float)(INT_MIN);
    float kmax = (float)(INT_MAX);
    bool flag = true;
    for(int i=1 ; i<n ; i++){
        if(arr[i]>=arr[i-1]){   //K min
            kmin = max(kmin , (arr[i]+arr[i-1])/2.0);
        }
        else{   //K max
            kmax = min(kmax , (arr[i]+arr[i-1])/2.0);
        }
        if(kmin>kmax){
            flag = false;
            break;
        }
    }
    if(flag==false) cout<<-1;
    else if(kmin==kmax){
        if(kmin - (int)kmin==0){ //Kmin & Kmax are integers
        cout<<"There is only one value of K : "<<kmin;
        }
        else cout<<-1;
    }
    else{
        if(kmin-(int)kmin>0){
            kmin = (int)kmin+1;
        }
        cout<<"Range of K is : ["<<kmin<<" ' "<<(int)kmax<<"]";
    }
}