#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 2, 3, 3, 3, 3, 3, 4, 4, 5, 8, 9};
    int n = 13;
    int target = 8;
    int low = 0;
    int high = n - 1;
    int mid = 0;
    bool flag = false;
    while (low <= high)
    {
        mid = (low + high) / 2;
        {
            if (arr[mid] == target && arr[mid]!=arr[mid-1])
            {
                high = mid - 1;
                flag = true;
                break;
            }
            else if (target > arr[mid])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    if (flag == false)
        cout << -1 << endl;
    else
    {
        while (mid > 0 && arr[mid] == arr[mid - 1])
        {
            mid--;
        }
    }
    cout << mid;

    
    // while (low <= high)
    // {
    //     mid = (low + high) / 2;
    //     {
    //         if (arr[mid] == target)
    //         {
    //             flag = true;
    //             break;
    //         }
    //         else if (target > arr[mid])
    //             low = mid + 1;
    //         else
    //             high = mid - 1;
    //     }
    // }
    // if (flag == false)
    //     cout << -1 << endl;
    // else
    // {
    //     while (mid > 0 && arr[mid] == arr[mid - 1])
    //     {
    //         mid--;
    //     }
    // }
    // cout << mid;
}