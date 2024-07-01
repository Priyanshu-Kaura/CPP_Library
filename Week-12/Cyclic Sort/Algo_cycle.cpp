#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 2, 5, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int i = 0;
    while (i < n)
    {
        int corrected_Idx = arr[i] - 1;
        if (i == corrected_Idx)
            i++;
        else
            swap(arr[i], arr[corrected_Idx]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}