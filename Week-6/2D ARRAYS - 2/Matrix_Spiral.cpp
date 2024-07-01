#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter number of rows : ";
    cin>>n;
    cout<<"Enter number of columns : ";
    cin>>m;

    cout<<"Enter elements of array : ";
    int arr[n][m];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin>>arr[i][j];
        }
    }
    
    int minr = 0;
    int minc = 0;
    int maxr = n-1;
    int maxc = m-1;
    cout<<"ARRAY in spiral form : "<<endl;
    while(minr<=maxr && minc<=maxc){
        // RIGHT
        if(minr>maxr || minc>maxc) break;
        for(int j=minc ; j<=maxc ; j++){
            cout<<arr[minr][j]<<" ";
        }
        minr++;

        // DOWN
        if(minr>maxr || minc>maxc) break;
        for(int i=minr ; i<=maxr ; i++){
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;

        // LEFT
        if(minr>maxr || minc>maxc) break;
        for(int j=maxc ; j>=minc ; j--){
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;

        // UP
        if(minr>maxr || minc>maxc) break;
        for(int i=maxr ; i>=minr ; i--){
            cout<<arr[i][minc]<<" ";
        }
        minc++;
    }
}