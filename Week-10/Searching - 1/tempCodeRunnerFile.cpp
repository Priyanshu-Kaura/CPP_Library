// LEETCODE 704

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int mid = 0;
        bool flag = false;
        for(int i=0 ; i<n ; i++){
            mid = (low+high)/2;
            if(nums[mid]==target) {
                flag = true;
                break;
            }
            else if(target>nums[mid]) low = mid+1;
            else high = mid-1;
        }
        if(flag == false) return -1;
        else return mid;
    }
};