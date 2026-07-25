class Solution {
public:
    void backtrack(vector<int>& nums, vector<int>& subset,
                   vector<vector<int>>& result, int index) {

        if (index >= nums.size()) {
            result.push_back(subset);
            return;
        }

        // include
        subset.push_back(nums[index]);
        backtrack(nums, subset, result, index + 1);

        // exclude
        subset.pop_back();

        // duplicate subsets happedn when we include the element, which we
        // excluded before

        while (index + 1 < nums.size() && nums[index] == nums[index + 1])
            index++;
        backtrack(nums, subset, result, index + 1);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        vector<vector<int>> result;
        vector<int> subset;
        int index = 0;

        backtrack(nums, subset, result, index);

        return result;
    }
};