class Solution {
public:
    int mySqrt(int x) {
        // return pow(x,0.5);

        if(x == 0) return 0;

        int ans = 1;

        for (int i = 1; i <= x; i++) {
            if ((long long)i * i <= x) {
                ans = i;
            } else {
                // i*i is more then x
                break;
            }
        }
        return ans;
    }
};