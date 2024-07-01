#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long int

bool cmp(int x, int y)
{
    return x > y;
}

ll Min_Cost_to_Break_Grid(int m, int n, vector<ll> vertical, vector<ll> horizontal)
{
    sort(vertical.begin(), vertical.end(), cmp);
    sort(horizontal.begin(), horizontal.end(), cmp);

    int h = 0; // pointer on horizontal array
    int v = 0; // pointer on vertical array

    int hr = 1;
    int vr = 1;
    ll ans = 0;
    while (h < horizontal.size() && v < vertical.size())
    {
        if (vertical[v] > horizontal[h])
        {
            ans += vertical[v] * vr;
            v++;
            hr++;
        }
        else
        {
            ans += horizontal[h] * hr;
            h++;
            vr++;
        }
    }

    while (h < horizontal.size()) //when vertical pointer is completed
    {
        ans += horizontal[h] * hr;
        h++;
        vr++;
    }
    while (v < vertical.size()) //when horizontal pointer is completed
    {
        ans += vertical[v] * vr;
        v++;
        hr++;
    }
    return ans;
}

int main()
{
    int m,n;
    cout<<"Enter length and width of board : ";
    cin>>m>>n;
    
    cout<<"Enter cost of vertical cuts : ";
    vector<ll> horizontal;
    for(int i =0 ; i<m-1 ; i++){
        int x;
        cin>>x;
        horizontal.push_back(x);
    }

    cout<<"Enter cost of horizontal cuts : ";
    vector<ll> vertical;
    for(int i =0 ; i<n-1 ; i++){
        int x;
        cin>>x;
        vertical.push_back(x);
    }
    cout<<"Min_Cost_to_Break_Grid : "<<Min_Cost_to_Break_Grid(m , n , horizontal , vertical);
}