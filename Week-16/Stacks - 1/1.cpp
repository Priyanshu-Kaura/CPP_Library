#include <iostream>
using namespace std;

int binary_search(int n , int arr[], int target)
{
int low = 0;
int high = n-1;
    bool flag = false;
    int mid = 0;
    while (low <= high)
    {
        mid = (high + low) / 2;

        if (arr[mid] == target)
        {
            flag = true;
            return mid;
            break;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (flag == false)
        return -1;
    else
        return mid;
}








int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;
    cout << "Enter target element : ";
    cin >> target;
    cout << target << " is at " << binary_search(n , arr, target) << " position."; 
}
