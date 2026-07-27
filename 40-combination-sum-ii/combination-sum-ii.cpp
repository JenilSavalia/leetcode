class Solution {
public:
    void backtrack(int index, int& sum, int& target, vector<int>& nums,
                   vector<vector<int>>& result, vector<int>& subset) {

        if (sum == target) {
            result.push_back(subset);
            return;
        }

        if (sum > target || index == nums.size()) {
            return;
        }

        // pick
        subset.push_back(nums[index]);
        sum += nums[index];
        backtrack(index + 1, sum, target, nums, result, subset);

        // dont pick
        subset.pop_back();
        sum -= nums[index];

        // avoid duplicatess
        while (index + 1 < nums.size() && nums[index] == nums[index + 1])
            index++;
        backtrack(index + 1, sum, target, nums, result, subset);
    }

    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());

        vector<vector<int>> result;
        vector<int> subset;

        int index = 0;
        int sum = 0;

        backtrack(index, sum, target, nums, result, subset);

        return result;
    }
};