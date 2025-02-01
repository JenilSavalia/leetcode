class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {

        // Parity In other words, one should be odd and the other should be
        // even.

        bool check = true;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] % 2 == nums[i - 1] % 2) {
                check = false;
                break;
            }
        }

        if (check == true) {
            return true;
        } else {
            return false;
        }
    }
};