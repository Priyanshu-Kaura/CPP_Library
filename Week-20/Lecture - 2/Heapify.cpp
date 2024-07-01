#include <iostream>
using namespace std;

void Heapify(int i, int arr[], int n)
{
    while (i < n)
    {
        int left = 2 * i;
        int right = 2 * i + 1;

        if ((left < n) && (arr[left] < arr[right]) && (arr[i] > arr[left]))
        {
            swap(arr[i], arr[left]);
            i = left;
        }
        else if ((right < n) && (arr[left] > arr[right]) && (arr[i] > arr[right]))
        {
            swap(arr[i], arr[right]);
            i = right;
        }
        else
            break;
    }
}

void print(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {-1, 10, 2, 14, 11, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    print(arr, n);

    for (int i = n / 2; i >= 1; i--)
    {
        Heapify(i, arr, n);
    }
    print(arr, n);
}