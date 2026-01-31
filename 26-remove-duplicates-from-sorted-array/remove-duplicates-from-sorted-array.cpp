class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int toPlace = 0;
        int i = 1;

        nums[toPlace++] = nums[0];

        for (i; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[toPlace++] = nums[i];
            }
        }

        return toPlace;
    }
};