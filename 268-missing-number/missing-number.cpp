class Solution {
public:
    int missingNumber(vector<int>& nums) {

        // 1. Hash map based approach O(nlogn)

        // int n = nums.size();
        // map<int, int> m;
        // for (int i = 0; i <= n; i++) {
        //     m.insert({i, 0});
        // }
        // for (int i = 0; i < n; i++) {
        //     m[nums[i]]++;
        // }

        // int retValue = 0;
        // for (auto x : m) {
        //     cout << x.second << endl;
        //     if (x.second == 0) {
        //         retValue = x.first;
        //         break;
        //     }
        // }
        // return retValue;

        // 2. sum of first n natural numbers O(n)

        int n = nums.size();
        int sum = n * (n + 1) / 2;
        int currSum = 0;

        for (int x : nums) {
            currSum += x;
        }

        return sum - currSum;
    }
};