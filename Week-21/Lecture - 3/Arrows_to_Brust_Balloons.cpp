//  LEETCODE - 452


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


bool cmp(vector<int>& a, vector<int>& b) {
    return a[0] < b[0];
}

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), cmp);
        int n = points.size();
        int ans = 0;
        int prevEnd = points[0][1]; // Track the end of the previous interval

        for (int i = 1; i < n; i++) {
            if (points[i][0] <= prevEnd) {
                // Overlapping interval found, increment answer
                ans++;
                // Choose the interval with smaller end time to remove
                prevEnd = min(prevEnd, points[i][1]);
            } else {
                // No overlap, update prevEnd
                prevEnd = points[i][1];
            }
        }

        return n-ans; 
    }
};






