class Solution {
public:
    int myAtoi(string s) {

        long long result = 0;
        int i = 0;
        int n = s.length();
        bool isPositive = true;

        while (i < n && s[i] == ' ') {
            i++;
        }

        if (s[i] == '-') {
            isPositive = false;
            i++;
        } else if (s[i] == '+') {
            i++;
        }

        while (i < n && s[i] == '0') {
            i++;
        }

        while (i < n && int(s[i]) >= 48 && int(s[i]) <= 57) {
            int digit = int(s[i]) - '0';

            result = result * 10 + digit;

            // Check for overflow
            if (isPositive && result > INT_MAX)
                return INT_MAX;
            if (!isPositive && -result < INT_MIN)
                return INT_MIN;

            i++;
        }
        return isPositive ? (int)result : (int)(-result);
    }
};