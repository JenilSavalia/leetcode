class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string ans = "";
        int counter = 0;
        // (()()) (())
        for (char x : s) {
            if (x == ')') {
                counter--;
            }
            if (counter != 0) {
                ans += x;
            }
            if (x == '(') {
                counter++;
            }
        }
        return ans;
    }
};