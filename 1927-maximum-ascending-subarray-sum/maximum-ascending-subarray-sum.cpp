class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {

        int currentCount = nums[0];
        int maxCount = 0;

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] > nums[i - 1]) {
                currentCount = currentCount + nums[i];
            } else {
                maxCount = max(maxCount, currentCount);
                currentCount = nums[i];
            }
        }

        maxCount = max(maxCount, currentCount);
        return maxCount;
    }
};