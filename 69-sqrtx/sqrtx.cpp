class Solution {
public:
    int mySqrt(int x) {
        // if(x == 0) return 0;

        // int ans = 1;

        // for (int i = 1; i <= x; i++) {
        //     if ((long long)i * i <= x) {
        //         ans = i;
        //     } else {
        //         // i*i is more then x
        //         break;
        //     }
        // }
        // return ans;

        // doing binary serach

        int l = 0;
        int r = x;
        int ans = 0;

        while (l <= r) {

            int mid = l + (r - l) / 2;

            if ((long long)mid*mid <= x) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return ans;
    }
};