class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum = 0;
        long long maxSum = INT_MIN;

        int start = 0;
        int end = 0;
        unordered_map<int, int> mp;

        while (end < nums.size()) {
            sum += nums[end];
            mp[nums[end]]++;

            if (end - start + 1 == k) {

                if (mp.size() == k) {
                    maxSum = max(sum, maxSum);
                }
                sum -= nums[start];

                mp[nums[start]]--;
                if (mp[nums[start]]== 0) {
                    mp.erase(nums[start]);
                }
                start++;
            }
            end++;
        }

        return maxSum == INT_MIN ? 0 : maxSum;
    }
};