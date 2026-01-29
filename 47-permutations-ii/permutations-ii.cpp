class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {

        // at same level previous number should not be equal to current number

        vector<vector<int>> result;
        vector<int> subset;
        vector<int> visited(nums.size(), 0);
        sort(nums.begin(), nums.end());
        generate(nums, result, subset, visited);

        return result;
    }

    void generate(vector<int>& nums, vector<vector<int>>& result,
                  vector<int>& subset, vector<int>& visited) {

        if (subset.size() == nums.size()) {
            result.push_back(subset);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {

            if (visited[i] == 1 ||
                (i > 0 && nums[i] == nums[i - 1] && visited[i - 1] == 0)) {
                continue;
            } else {
                visited[i] = 1;
                subset.push_back(nums[i]);
                generate(nums, result, subset, visited);
            }

            subset.pop_back();
            visited[i] = 0;
        }
    }
};