class Solution {
public:
    double pows(double x, int n) {
        if (n == 0) {
            return 1;
        }
        return x * pows(x, n - 1);
    }
    double myPow(double x, int n) {
        // double xx = pows(x,n);

        long long N = n;

        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        return pow(x,N);
    }
};