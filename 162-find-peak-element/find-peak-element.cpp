class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        int returnIndex = 0;
        for (int i = 0; i < nums.size(); i++) {
            int left = (i == 0) ? INT_MIN : nums[i - 1];
            int right = (i == nums.size() - 1) ? INT_MIN : nums[i + 1];
            if (nums[i] > left && nums[i] > right) {
                returnIndex = i;
                break;
            }
        }
        return returnIndex;
    }
};