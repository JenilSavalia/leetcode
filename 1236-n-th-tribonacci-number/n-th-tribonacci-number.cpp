class Solution {
public:

    vector<int> dp;
    int F(int n){
        if(n==0) return 0;
        if(n==1 || n==2) return 1;
        if(dp[n] != -1) return dp[n];
        dp[n] = F(n-1) + F(n-2) + F(n-3);
        return dp[n];
    }
    int tribonacci(int n) {
        dp.resize(n+1,-1);
        return F(n);
    }
};