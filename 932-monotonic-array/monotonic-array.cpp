class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isMonotoneInc = true;
        bool isMonotoneDec = true;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (!(nums[i] >= nums[i + 1])) {
                isMonotoneInc = false;
            }
        }

        for (int i = 0; i < nums.size() - 1; i++) {
            if (!(nums[i] <= nums[i + 1])) {
                isMonotoneDec = false;
            }
        }

        return isMonotoneInc || isMonotoneDec;
    }
};