class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        // int left = 0;
        // int right = n - 1;
        vector<int> TwoSum;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    TwoSum.push_back(i);
                    TwoSum.push_back(j);
                    break;
                }
            }
        }
        return TwoSum;
    }
};