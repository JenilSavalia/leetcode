class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {

        int n = nums.size();

        // pre processing the suiifx greatest element
        vector<int> max_right(n);
        int prev_max = 0;
        for (int i = n - 1; i >= 0; i--) {
            max_right[i] = max(prev_max, nums[i]);
            prev_max = max_right[i];
        }

        int l = 0;
        int result = 0;
        for (int r = 0; r < n; r++) {

            while (nums[l] > max_right[r]) {
                l=l+1;
            }
            result = max(result, r - l);
        }

        return result;
    }
};