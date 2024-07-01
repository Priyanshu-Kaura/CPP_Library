#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2)
{
    double r1 = p1.first  / p1.second ;
    double r2 = p2.first / p2.second;
    return r1 > r2;
}

int Fractional_Knapsack(vector<int> profit, vector<int> weights, int n, int w)
{
    /*
    time comp : O(nlogn)
    space comp : O(sorting algo)
    */
    vector<pair<int, int>> arr;
    for (int i = 0; i < n; i++)
    {
        arr.push_back({profit[i], weights[i]});
    }

    sort(arr.begin(), arr.end(), cmp);

    double result = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].second <= w)
        {
            result += arr[i].first;
            w -= arr[i].second;
        }
        else
        {
            result += (arr[i].first / arr[i].second) * w;
            w = 0;
            break;
        }
    }
    return result;
}

int main()
{
    vector<int> profit = {60, 100, 120};
    vector<int> weights = {10, 20, 30};
    int n = 3;
    int w = 50;
    cout<<Fractional_Knapsack(profit , weights , n , w);
}