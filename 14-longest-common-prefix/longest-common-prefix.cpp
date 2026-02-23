class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if (strs.empty())
            return "";
        if (strs.size() == 1)
            return strs[0];

        int minLen = INT_MAX;
        for (string& x : strs) {
            minLen = min(minLen, (int)x.length());
        }

        string result = "";

        for (int currIndex = 0; currIndex < minLen; currIndex++) {

            char currentChar = strs[0][currIndex];

            for (int i = 1; i < strs.size(); i++) {
                if (strs[i][currIndex] != currentChar) {
                    return result;
                }
            }

            result += currentChar;
        }

        return result;
    }
};