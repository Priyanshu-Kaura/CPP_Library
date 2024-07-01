int getMedian(priority_queue<int> &left , priority_queue<int , vector<int> , greater<int>> &right , int x , int y){
    int totalSize = x + y;
    if(totalSize % 2 != 0){
        // ODD
        return right.top();
    }
    else{
        // EVEN
        return (left.top() + right.top())/2.0;
    }
}

bool isBalanced(int x , int y){
    return (x == y) || (x + 1 == y);
}

class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        priority_queue<int> left;
        priority_queue<int , vector<int> , greater<int>> right;

        int x = 0;
        int y = 0;
        right.push(nums[0]);
        y++;
        for(int i = 1 ; i < k ; i++){
            int curr = nums[i];
            double med = getMedian(left , right , x , y);

            if(curr < med){
                // go left
                left.push(curr);
                x++;
                if(!isBalanced(x , y)){
                    int toBeRemoved = left.top();
                    left.pop();
                    right.push(toBeRemoved);
                    x--;
                    y++;
                }
            }

            else{
                // go right
                right.push(curr);
                y++;
                if(!isBalanced(x , y)){
                    int toBeRemoved = right.top();
                    right.pop();
                    left.push(toBeRemoved);
                    y--;
                    x++;;
                }
            }
        }

        double m = getMedian(left , right , x , y);
        
        vector<double> result;
        result.push_back(m);

        for(int i = k ; i < nums.size() ; i++){
            int newElementIndex = i;
            int oldElementToBeDeleted = i - k;
            double med = getMedian(left , right , x , y);

            if(nums[newElementIndex] > med){
                // go right
                right.push(nums[newElementIndex]);
                y++;
                  if(!isBalanced(x , y)){
                    int toBeRemoved = right.top();
                    right.pop();
                    left.push(toBeRemoved);
                    y--;
                    x++;;
                }
            }
            else{
                // go left
                left.push(nums[newElementIndex]);
                x++;
                if(!isBalanced(x , y)){
                    int toBeRemoved = left.top();
                    left.pop();
                    right.push(toBeRemoved);
                    x--;
                    y++;
                }
            }

            unordered_map<int  , int> mp;
            mp[nums[oldElementToBeDeleted]] = oldElementToBeDeleted;

            while((!left.empty()) && (mp.count(left.top()))){
                mp.erase(left.top());
                left.pop();
                x--;
                if(!isBalanced(x , y)){
                    if(!isBalanced(x , y)){
                    int toBeRemoved = right.top();
                    right.pop();
                    left.push(toBeRemoved);
                    y--;
                    x++;;
                }
                }
            }
             while((!right.empty()) && (mp.count(right.top()))){
                mp.erase(right.top());
                right.pop();
                y--;
                if(!isBalanced(x , y)){
                    int toBeRemoved = left.top();
                    left.pop();
                    right.push(toBeRemoved);
                    x--;
                    y++;
                }
            }
            result.push_back(getMedian(left , right , x, y));
        }
        return result;
    }
};