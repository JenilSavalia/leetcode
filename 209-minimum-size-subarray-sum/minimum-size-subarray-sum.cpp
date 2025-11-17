class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int sum = 0;
        int length = INT_MAX;

        int start = 0;
        int end = 0;
        while (end < nums.size()) {
            sum += nums[end];

            while ( sum >= target) {
                length = min(length, end - start + 1);
                sum -= nums[start];
                start++;
            }

            end++;
        }
        return length == INT_MAX ? 0 : length;
    }
};