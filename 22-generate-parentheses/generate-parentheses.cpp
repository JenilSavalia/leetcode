class Solution {
public:
    void generate(int openCount, int closeCount, string curr,
                  vector<string>& result, int& n) {

        if (openCount > n || closeCount > openCount) {
            return;
        }
        if (curr.length() == 2 * n) {
            result.push_back(curr);
            return;
        }

        // open
        generate(openCount + 1, closeCount, curr + "(", result, n);

        // close
        generate(openCount, closeCount + 1, curr + ")", result, n);
    }

    vector<string> generateParenthesis(int n) {

        vector<string> result;

        generate(1, 0, "(", result, n);

        return result;
    }
};