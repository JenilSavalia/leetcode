class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {

        vector<int> subset;
        vector<vector<int>> result;

        generate(subset, result, 0, n, k, 0);

        return result;
    }

    void generate(vector<int>& subset, vector<vector<int>>& result, int index,
                  int target, int size, int sum) {

        if (sum > target || index > 9)
            return;

        if (subset.size() == size) {
            if (sum == target) {
                result.push_back(subset);
            }
            return;
        }

        subset.push_back(index + 1);
        generate(subset, result, index + 1, target, size, sum + index + 1);

        subset.pop_back();
        generate(subset, result, index + 1, target, size, sum);
    }
};