// LEETCODE - 253 (MEETING ROOMS (ii))



#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int Min_Meeting_rooms(vector<vector<int>> &intervals)
{
    vector<int> start, end;
    for (auto ele : intervals)
    {
        start.push_back(ele[0]);
        end.push_back(ele[1]);
    }
    sort(start.begin(), start.end());
    sort(end.begin(), end.end());

    int ans = 0;
    int rooms = 0;
    int i = 0;
    int j = 0;
    while (i < start.size() && j < end.size())
    {
        if (start[i] < end[j])
        {
            rooms++;
            ans = max(ans, rooms);
            i++;
        }
        else
        {
            rooms--;
            j++;
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> intervals = {{1, 10}, {2, 7}, {3, 19}, {8, 12}, {10, 20}, {11, 30}};
    int minRooms = Min_Meeting_rooms(intervals);

    cout << "Min  Rooms required : " << Min_Meeting_rooms(intervals);
    return 0;
}
