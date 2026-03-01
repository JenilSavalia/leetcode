class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int> stk;

        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" ||
                tokens[i] == "/") {
                int dgt1 = stk.top();
                stk.pop();
                int dgt2 = stk.top();
                stk.pop();

                if (tokens[i] == "+") {
                    stk.push((dgt2 + dgt1));
                } else if (tokens[i] == "-") {
                    stk.push((dgt2 - dgt1));
                } else if (tokens[i] == "/") {
                    stk.push((dgt2 / dgt1));
                } else {
                    stk.push((dgt2 * dgt1));
                }
            } else {
                int num = 0;
                bool isNegative = false;
                int start = 0;

                if (tokens[i][0] == '-') {
                    isNegative = true;
                    start = 1;
                }

                for (int j = start; j < tokens[i].length(); j++) {
                    num = num*10 + (tokens[i][j] - '0');
                }

                if (isNegative)
                    num = -(num);
                stk.push(num);
            }
        }
        return stk.top();
    }
};