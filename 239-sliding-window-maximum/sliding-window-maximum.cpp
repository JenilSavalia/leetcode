class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        deque<int> que; // pair<nums[i],i>
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {

            // 1. Remove indices outside the window
            while (!que.empty() && que.front() <= i - k) {
                que.pop_front();
            }

            while (!que.empty() && nums[que.back()] < nums[i]) {
                que.pop_back();
            }

            // 3. Add current index
            que.push_back(i);

            // 4. Add max to result when window is valid
            if (i >= k - 1) {
                result.push_back(nums[que.front()]);
            }
        }

        return result;
    }
};