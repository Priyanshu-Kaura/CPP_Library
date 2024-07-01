#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter number of rows : ";
    cin>>n;
    int arr[n][n];
    int num = 1;
    int minr = 0;
    int maxr = n-1;
    int minc = 0;
    int maxc = n-1;

    cout<<"ARRAY in spiral form : "<<endl;
    while(num <=n*n){
    // RIGHT
    if(minr>maxr || minc>maxc)  break;
    for(int j=minc ; j<=maxc ; j++){
        arr[minr][j] = num++;
    }
    minr++;

    // DOWN
    if(minr>maxr || minc>maxc)  break;
    for(int i=minr ; i<=maxr ; i++){
        arr[i][maxc] = num++;
    }
    maxc--;

    // LEFT
    
    for(int j=maxc ; j>=minc ; j--){
        arr[maxr][j] = num++;
    }
    maxr--;

    // UP
    if(minr>maxr || minc>maxc)  break;
    for(int i=maxr ; i>=minr ; i--){
        arr[i][minc] = num++;
    }
    minc++;
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}