/// LEETCODE - 435


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


//FOR STARTING REARRANGEMENT



// bool cmp(vector<int>& a, vector<int>& b) {
//     return a[0] < b[0];
// }

// class Solution {
// public:
//     int eraseOverlapIntervals(vector<vector<int>>& intervals) {
//         sort(intervals.begin(), intervals.end(), cmp);
//         int n = intervals.size();
//         int ans = 0;
//         int prevEnd = intervals[0][1]; // Track the end of the previous interval

//         for (int i = 1; i < n; i++) {
//             if (intervals[i][0] < prevEnd) {
//                 // Overlapping interval found, increment answer
//                 ans++;
//                 // Choose the interval with smaller end time to remove
//                 prevEnd = min(prevEnd, intervals[i][1]);
//             } else {
//                 // No overlap, update prevEnd
//                 prevEnd = intervals[i][1];
//             }
//         }

//         return ans;
//     }
// };



//FOR ENDING REARRANGEMENT

bool cmp(vector<int>& a, vector<int>& b) {
    return a[1] < b[1];
}

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), cmp);
        int n = intervals.size();
        int ans = 0;
        int prevEnd = intervals[0][1]; // Track the end of the previous interval

        for (int i = 1; i < n; i++) {
            if (intervals[i][0] < prevEnd) {
                // Overlapping interval found, increment answer
                ans++;
            } else {
                // No overlap, update prevEnd
                prevEnd = intervals[i][1];
            }
        }

        return ans;
    }
};
