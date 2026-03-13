class Solution {
public:
    int maxResult(vector<int>& nums, int k) {

        // Instead of thinking:
        // From where should I jump?

        // Think:
        // What is the best score to reach this index?

        // dp[i] = best score to reach index i

        // dp[i] = nums[i] + max(dp[i-1], dp[i-2], ... , dp[i-k])

        //  inorder to get max value of dp in window i-k , we use monotonic decreasing deque where front has maximum 
        // dp value in window

        // 

        deque<int> que;
        que.push_back(0);

        vector<int> dp(nums.size());
        dp[0] = nums[0];
        int i = 1;

        while (i < nums.size()) {

            // remove elements outside window
            while (!que.empty() && que.front() < i - k) {
                que.pop_front();
            }

            dp[i] = nums[i] + dp[que.front()];

            // maintain decreasing queue
            while (!que.empty() && dp[que.back()] <= dp[i]) {
                que.pop_back();
            }

            // push current index to queue
            que.push_back(i);

            i++;
        }
        return dp[nums.size() - 1];
    }
};