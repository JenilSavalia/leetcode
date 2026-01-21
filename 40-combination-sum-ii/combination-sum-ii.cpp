class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        vector<vector<int>> result;
        vector<int> subset;

        // we are given candidate array which can contain duplicate elements,
        // when we generate the combinations with duplicate elements, then same
        // combinations are formed.
        // => to avoid that , we would skip duplicates, makig combinations
        // unique

        sort(candidates.begin(), candidates.end());
        generate(candidates, result, subset, 0, 0, target);

        return result;
    }
    void generate(vector<int>& candidates, vector<vector<int>>& result,
                  vector<int> subset, int index, int sum, int target) {

        if (sum == target) {
            result.push_back(subset);
            return;
        }

        if (sum > target) {
            return;
        }

        for (int i = index; i < candidates.size(); i++) {
            // 🔥 skip duplicates at SAME recursion level

            if (i > index && candidates[i] == candidates[i - 1]) {
                continue; // Skip duplicate
            }

            subset.push_back(candidates[i]);
            generate(candidates, result, subset, i + 1, sum + candidates[i],
                     target);

            subset.pop_back();
        }
    }
};