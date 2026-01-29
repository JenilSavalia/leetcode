class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {

        // Permutations = choose from all unused elements, not from index → end.

        vector<vector<int>> result;
        vector<int> subset;
        vector<int> visited(nums.size(), 0);
        generatePermutations(nums, result, subset, visited);

        return result;
    }

    void generatePermutations(vector<int>& nums, vector<vector<int>>& result,
                              vector<int> &subset, vector<int> &visited) {

        if (subset.size() == nums.size()) {
            result.push_back(subset);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (visited[i] == 0) {
                subset.push_back(nums[i]);
                visited[i] = 1;
                generatePermutations(nums, result, subset, visited);

                // backtracking
                subset.pop_back();
                visited[i] = 0;

            } else {
                continue;
            }
        }
    }
};