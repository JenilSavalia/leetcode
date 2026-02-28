class Solution {
public:
    int calculate(string s) {

        stack<pair<char, long long>> stk; // pair {'+',1}
        long long sum = 0;
        long long num = 0;
        char last_oper = '+';

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == ' ')
                continue;

            if (isdigit(s[i])) {
                // building the number
                num = num * 10 + int(s[i] - '0');
            } else if (s[i] == '+' || s[i] == '-') {

                // apply previous number
                if (last_oper == '+')
                    sum += num;
                else
                    sum -= num;

                last_oper = s[i];
                num = 0;
            } else if (s[i] == '(') {

                stk.push({last_oper, sum});
                sum = 0;
                last_oper = '+';
                num = 0;
            } else if (s[i] == ')') {

                // apply current number first
                if (last_oper == '+')
                    sum += num;
                else
                    sum -= num;

                num = 0;

                auto [lastOperator, lastSum] = stk.top();
                stk.pop();
                if (lastOperator == '+') {
                    sum = lastSum + sum;
                } else if (lastOperator == '-') {
                    sum = lastSum - sum;
                }
            }
        }

        //  apply last number
        if (last_oper == '+')
            sum += num;
        else
            sum -= num;

        return (int)sum;
    }
};
