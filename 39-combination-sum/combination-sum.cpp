class Solution {
public:
    void backtrack(int index, vector<int>& nums, vector<vector<int>>& result,
                   vector<int>& subset, int& target, int sum) {

        if (sum > target || index == nums.size())
            return;

        if (sum == target) {
            result.push_back(subset);
            return;
        }

        // pick
        subset.push_back(nums[index]);
        sum += nums[index];
        backtrack(index, nums, result, subset, target, sum);

        subset.pop_back();
        sum -= nums[index];

        backtrack(index+1, nums, result, subset, target, sum);
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {

        vector<vector<int>> result;
        vector<int> subset;

        sort(nums.begin(),nums.end());

        int index = 0;
        int sum = 0;

        backtrack(index, nums, result, subset, target, sum);

        return result;
    }
};