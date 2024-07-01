#include <iostream>
using namespace std;
int main()
{
    //  LINEAR APPROCH
    // int arr[] = {0, 1, 2, 3, 4,5,6,7, 8, 9, 12};
    // int n = 8;
    // int i = 0;
    // while (arr[i] == i)
    //     i++;
    // cout << i;

    //  BINARY APPROCH
    int arr[] = {0, 1, 3, 4, 6, 7, 8, 9, 11};
    int n = 9;
    int low = 0;
    int high = n - 1;
    int mid = 0;
    int ans = -1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == mid)
            low = mid + 1;
        else
        {
            ans = mid;
            high = mid - 1;
        }
    }
    cout << ans;
}