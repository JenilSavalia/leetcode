class Solution {
public:
    int rec(int num, int rev) {

        if (num == 0)
            return rev;
        int digit = num % 10;
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7)) {
            return 0;
        }
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8)) {
            return 0;
        }

        return rec(num / 10, rev * 10 + digit);
    }

    int reverse(int x) { return rec(x, 0); }
};