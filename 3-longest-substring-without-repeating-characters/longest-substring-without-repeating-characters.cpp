class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        if (s.length() == 0)
            return 0;

        map<char, int> m;

        int i = 0, j = 0;

        int maxLength = 0;

        while (j < s.length()) {
            m[s[j]]++;

            while (m[s[j]] > 1 && i <= j) {
                m[s[i]]--;
                i++;
            }

            cout << i << " " << j << "| ";
            maxLength = max(maxLength, j - i + 1);

            j++;
        }

        return maxLength;
    }
};