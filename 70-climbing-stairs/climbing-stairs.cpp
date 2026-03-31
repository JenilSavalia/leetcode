class Solution {
public:
    vector<int> dp;
    int F(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }
        if (dp[n] != -1)
            return dp[n];

        dp[n] = F(n - 1) + F(n - 2);
        return dp[n];
    }
    int climbStairs(int n) {
        dp.resize(n + 1, -1);
        return F(n);
    }
};