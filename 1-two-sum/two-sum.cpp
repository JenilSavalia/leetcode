class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> mpp;
        vector<int> TwoSum;

        for (int i = 0; i < n; i++) {
            int diff = target - nums[i];
            if (mpp.find(diff) != mpp.end()) {
                TwoSum.push_back(i);
                TwoSum.push_back(mpp[diff]);
            }
            mpp[nums[i]] = i;
        }
        return TwoSum;
    }
};