#include<iostream>
#include<vector>
using namespace std;
int matrix_score(vector< vector<int> >& v){
    int rows = v.size();
    int cols = v[0].size();
    // making the first column all 1's 
    for(int i=0 ; i<rows ; i++){
        if(v[i][0]==0){  //flip
          for(int j=0 ; j<cols ; j++){
            if(v[i][j]==0) v[i][j]=1;
            else v[i][j]=0;
          }  
        }
    }
    // flip the columns where noz > noo
    for(int j=0 ; j<cols ; j++){
        int noz = 0;
        int noo = 0;
        for(int i=0 ; i<rows ; i++){
            if(v[i][j]==0) noz++;
            else noo++;
        }
        if(noz > noo){
            for(int i=0 ; i<rows ; i++){
                if(v[i][j]==0) v[i][j]=1;
                else v[i][j]=0;
            }
        }
    }

    //Converting binary to decimal
    int sum = 0;
    for(int i=0 ; i<rows ; i++){
        int x=1;
        for(int j=cols-1 ; j>=0 ; j--){
            sum += v[i][j]*x;
            x *=2;
        }
    }
    return sum;
}
int main(){
    int n;
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
     cout<<"2D ARRAY : "<<endl;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"MAX SUM : "<<matrix_score(v);
}