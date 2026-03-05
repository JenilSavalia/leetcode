class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> stt;
        long long maxSum = INT_MIN;
        long long sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            stt[nums[i]]++;

            if (i + 1 >= k) {
                if (stt.size() == k) {
                    maxSum = max(sum, maxSum);
                }
                sum -= nums[i+1-k];
                stt[nums[i + 1 - k]]--;
                if (stt[nums[i + 1 - k]] == 0) {
                    stt.erase(nums[i+1-k]);
                }
            }
        }
        return maxSum == INT_MIN ? 0 : maxSum;
    }
};