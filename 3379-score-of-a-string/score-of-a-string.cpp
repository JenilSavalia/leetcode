class Solution {
public:
    int scoreOfString(string s) {
        int count = 0;
        for (int i = 0; i < s.length() - 1; i++) {
            count = count + abs(int(s[i]) - int(s[i + 1]));
        }
        return count;
    }
};