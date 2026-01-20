class Solution {
public:
    vector<vector<int>> combine(int n, int k) {

        vector<vector<int>> result;
        vector<int> subset;

        generate(result,subset,0,n,k);
        return result;
    }
    void generate(vector<vector<int>>& result, vector<int> &subset, int pos,int &n,int &k) {

        if (pos == n) {
            if (subset.size() == k) {
                result.push_back(subset);
            }
            return;
        }

        subset.push_back(pos + 1);
        generate(result, subset, pos + 1,n,k);

        subset.pop_back();

        generate(result, subset, pos + 1,n,k);
    }
};