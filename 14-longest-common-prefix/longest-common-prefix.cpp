class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result;
        int n = strs.size();

        int j = 0;
        while (j < strs[0].size()) {
            char curr = strs[0][j];
            for (int i = 0; i < n; i++) {
                if (j >= strs[i].size() || strs[i][j] != curr) {
                    return result;
                }
            }
            result += curr;
            j++;
        }
        return result;
    }
};