#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int Minimum_Product_Subset(vector<int> v)
{
    int count_neg = 0;
    int count_zero = 0;
    int count_pos = 0;
    int largest_neg = INT_MIN;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] < 0)
        {
            count_neg++;
            largest_neg = max(largest_neg, v[i]);
        }

        else if (v[i] == 0)
            count_zero++;
        else
            count_pos++;
    }

    if (count_neg == 0)
    {
        if (count_zero == 0)
        {
            return *min_element(v.begin(), v.end());
        }
        else
            return 0;
    }

    else
    {
        int product = 1;
        if (count_zero != 0)
            return 0;

        else if (count_neg % 2 == 0)
        {
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i] == 0)
                    continue;
                product *= v[i];
            }
            product = product / largest_neg;
        }
        else
        {
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i] == 0)
                    continue;
                product *= v[i];
            }
        }
        return product;
    }
}
int main()
{
    // vector<int> arr{-2, -3, 1, 4, -2};
    // vector<int> arr{-2, 0, -3, 1, 4, -2};
    vector<int> arr{-2, -3, 1, 4, -2, -5};
    cout << "Minimum Product : " << Minimum_Product_Subset(arr) << "\n";
}