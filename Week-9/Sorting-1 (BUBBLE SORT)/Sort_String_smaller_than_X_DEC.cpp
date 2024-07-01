#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of String : ";
    cin >> n;
    vector<char> v;
    cout << "Enter elements of String : ";
    for (int i = 0; i < n; i++)
    {
        char a;
        cin >> a;
        v.push_back(a);
    }

    cout << "Elements greater than 'X' : ";
    vector<char> v1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] >= 'X')
            v1.push_back(v[i]);
    }

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    cout << endl;

    cout << "Elements in Sorted order in DESENDING : ";
    for (int i = 0; i < v1.size() - 1; i++)
    { 
        bool flag = true;
        for (int j = 0; j < v1.size() - 1 - i; j++)
        {
            if (v1[j] < v1[j + 1])
            {
                swap(v1[j], v1[j + 1]);
                flag = false; // SWAP
            }
        }
        if (flag = false)
            break; // didn't swap
    }
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
}