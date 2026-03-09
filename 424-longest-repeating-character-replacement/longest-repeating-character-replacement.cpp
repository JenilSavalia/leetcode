class Solution {
public:
    int characterReplacement(string s, int k) {

        unordered_map<char,int> mpp;
        int start = 0;
        int end = 0;
        int maxLen = 0;
        int maxFreq = 0;

        while (end < s.length()) {
            mpp[s[end]]++;
            maxFreq = max(maxFreq, mpp[s[end]]);

            int windowSize = end - start + 1;

            while (windowSize - maxFreq > k) {
                mpp[s[start]]--;
                if (mpp[s[start]] == 0) {
                    mpp.erase(s[start]);
                }
                // maxFreq = max(maxFreq, mpp[s[start]]);
                start++;
                windowSize = end - start + 1;
            }
            maxLen = max(maxLen, end - start + 1);
            end++;
        }
        return maxLen;
    }
};