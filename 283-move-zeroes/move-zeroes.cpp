class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if (nums.size() == 1)
            return;
        int i = 0;
        int j = 0;

        for (i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};