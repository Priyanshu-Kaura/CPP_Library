#include<iostream>
#include<vector>
using namespace std;
void set_zeros(vector<vector<int>> &v){
    bool firstrow = false;
    bool firstcol = false;
    int rows = v.size();
    int cols = v[0].size();

    //Set markers in First Row and First Cols
    for(int i=0 ; i<rows ; i++){
        for(int j=0 ; j<cols ; j++){
            if(v[i][j]==0){
                if(i==0) firstrow = true;
                if(j==0) firstcol = true;
                v[0][j] = 0;
                v[i][0] = 0;
            }
        }
    }

    //Replace inner matrix
    for(int i=0 ; i<rows ; i++){
        for(int j=0 ; j<cols ; j++){
            if(v[0][j]==0 || v[i][0]==0){
                v[i][j]=0;
            }
        }
    }

    //Last remaining checks
    if(firstrow){
        for(int j=0 ; j<cols ; j++){
            v[0][j]=0;
        }
    }
     if(firstcol){
        for(int i=0 ; i<rows ; i++){
            v[i][0]=0;
        }
    }
}
int main(){
    int n;
    cout<<"Enter number no rows : ";
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
    set_zeros(v);
     cout<<"2D ARRAY : "<<endl;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}