#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int main() {
    vector<int> v1;
    int n; 
    cout << "Enter size of 1st Array: ";
    cin >> n;
    cout << "Enter elements of 1st Array: ";
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v1.push_back(a);
    }

    vector<int> v2;
    int m; 
    cout << "Enter size of 2nd Array: ";
    cin >> m;
    cout << "Enter elements of 2nd Array: ";
    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;
        v2.push_back(a);
    }
    bool flag;
    for(int i=0 ; i<v1.size() ; i++){
        flag = false;
        for(int j=0 ; j<v2.size() ; j++){
            if(v1[i]==v2[j]){
                flag = true;
            }
        }
    }    
    if (flag==true) cout << "SUBSET ";
        else cout<<"NOT A SUBSET";
}
