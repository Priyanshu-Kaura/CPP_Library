#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int main() {
    vector<int> v;
    int n; 
    cout << "Enter size of Array: ";
    cin >> n;
    cout << "Enter elements of Array: ";
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    bool flag;     //NON REPEATING IS PRESENT
    for (int i = 0; i < n; i++) {
        flag = true;
        for (int j = 0; j < n; j++) {
            if (i != j && v[i] == v[j]) {
               flag = false;
                break;
            }
        }
        if (flag==true) {
            cout << "First non-repeating element: " << v[i] << endl;
            break;
        }
    }
}
