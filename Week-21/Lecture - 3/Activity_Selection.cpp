#include <iostream>
#include <vector>
#include<utility>
#include <algorithm>

using namespace std;

class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        vector<pair<int , int>> intervals;
        int n = start.size();
        
        for(int i = 0 ; i < n ; i++){
            intervals.push_back(make_pair(start[i] , end[i]));
        }
        
        sort(intervals.begin() , intervals.end());
        
        int ans = 0;
        int prevEnd = intervals[0].second;
        
        for (int i = 1; i < n; i++) {
            if(intervals[i].first < prevEnd){
                ans++;
                prevEnd = min(prevEnd , intervals[i].second);
            }
            
            else{
                prevEnd = intervals[i].second;
            }
        }
        return n - ans;
    }
};

