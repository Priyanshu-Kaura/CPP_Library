#include <iostream>
using namespace std;

int partition(int arr[], int start_Idx, int end_Idx)
{
    int pivot_Ele = arr[(start_Idx + end_Idx) / 2];
    int count = 0;
    for (int i = start_Idx; i <= end_Idx; i++)
    {
        if (i == (start_Idx + end_Idx) / 2)
            continue;
        if (arr[i] <= pivot_Ele)
            count++;
    }
    int pivot_Idx = count + start_Idx;
    swap(arr[(start_Idx + end_Idx) / 2], arr[pivot_Idx]);

    int i = start_Idx;
    int j = end_Idx;
    while (i < pivot_Idx && j > pivot_Idx)
    {
        if (arr[i] <= arr[pivot_Idx])
            i++;
        else if (arr[j] > arr[pivot_Idx])
            j--;
        else if (arr[i] > pivot_Ele && arr[j] <= pivot_Ele)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

int KthSmallest(int arr[], int start_Idx, int end_Idx, int k)
{
    int pivot_Idx = partition(arr, start_Idx, end_Idx);
    if (pivot_Idx + 1 == k)
        return arr[pivot_Idx];
    else if (pivot_Idx + 1 > k)
        return KthSmallest(arr, start_Idx, pivot_Idx - 1, k);
    else
        return KthSmallest(arr, pivot_Idx + 1, end_Idx, k);
}

int main()
{
    int arr[] = {5, 1, 8, 2, 7, 6, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }

    int k = 4;
    cout << endl
         << k << "th Smallest element : " << KthSmallest(arr, 0, n - 1, k);
}