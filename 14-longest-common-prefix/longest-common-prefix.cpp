class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        // vertical compare method

        // if (strs.empty())
        //     return "";
        // if (strs.size() == 1)
        //     return strs[0];

        // int minLen = INT_MAX;
        // for (string& x : strs) {
        //     minLen = min(minLen, (int)x.length());
        // }

        // string result = "";

        // for (int currIndex = 0; currIndex < minLen; currIndex++) {

        //     char currentChar = strs[0][currIndex];

        //     for (int i = 1; i < strs.size(); i++) {
        //         if (strs[i][currIndex] != currentChar) {
        //             return result;
        //         }
        //     }

        //     result += currentChar;
        // }

        // return result;

        // better approach

        // sorting the array
        sort(strs.begin(), strs.end());

        int n = strs.size();
        int point1 = 0;
        int point2 = 0;

        string result = "";

        while ((point1 < strs[0].length() && point2 < strs[n - 1].length()) &&
               strs[0][point1] == strs[n - 1][point2]) {
            result += strs[0][point1];
            point1++;
            point2++;
        }

        return result;
    }
};