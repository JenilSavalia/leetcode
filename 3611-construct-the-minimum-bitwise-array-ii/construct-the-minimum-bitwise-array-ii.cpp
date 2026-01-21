class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {

        vector<int> result(nums.size(), -1);

        for (int i = 0; i < nums.size(); i++) {

            if(nums[i]%2==0) continue;
            
            int n = nums[i];
            result[i] = n - ((n + 1) & (-n - 1)) / 2;
        }

        return result;
    }
};