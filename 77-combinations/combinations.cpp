class Solution {
public:
    void backtrack(vector<vector<int>>& result, vector<int>& subset, int curr,
                   int& n, int& k) {

        if (subset.size() == k) {
            result.push_back(subset);
            return;
        }

        if (curr > n)
            return;

        // pick
        subset.push_back(curr);
        backtrack(result, subset, curr + 1, n, k);

        // dont pick
        subset.pop_back();
        backtrack(result, subset, curr + 1, n, k);
    }

    vector<vector<int>> combine(int n, int k) {

        vector<vector<int>> result;
        vector<int> subset;
        int curr = 1;

        backtrack(result, subset, curr, n, k);

        return result;
    }
};