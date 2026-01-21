class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        vector<vector<int>> result;
        vector<int> subset;
        sort(nums.begin(), nums.end());
        generate(nums, result, subset, 0);

        return result;
    }
    void generate(vector<int>& nums, vector<vector<int>>& result,
                  vector<int>& subset, int index) {

        result.push_back(subset);

        for (int i = index; i < nums.size(); i++) {

            if (i > index && nums[i - 1] == nums[i]) {
                continue;
            }

            subset.push_back(nums[i]);
            generate(nums, result, subset, i + 1);
            subset.pop_back();
        }
    }
};