#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &a, vector<int> &b, vector<int> &v)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] > b[j])
        {
            v[k] = a[i];
            i++;
            k++;
        }
        else
        {
            v[k] = b[j];
            j++;
            k++;
        }
        if (i == a.size())
        {
            while (j < b.size())
            {
                v[k] = b[j];
                j++;
                k++;
            }
        }

        if (j == b.size())
        {
            while (i < a.size())
            {
                v[k] = a[i];
                i++;
                k++;
            }
        }
    }
}

void mergeSort_DEC(vector<int> &v)
{
    int n = v.size();
    if (n == 1)
        return;
    int n1 = n / 2, n2 = n - n / 2;
    vector<int> a(n1), b(n2);
    for (int i = 0; i < n1; i++)
    {
        a[i] = v[i];
    }

    for (int i = 0; i < n2; i++)
    {
        b[i] = v[i + n1];
    }

    mergeSort_DEC(a);
    mergeSort_DEC(b);
    merge(a, b, v);
    a.clear();
    b.clear();
}

int main()
{
    int arr[] = {5, 1, 3, 0, 4, 9, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v(arr, arr + n);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    mergeSort_DEC(v);
    cout<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}