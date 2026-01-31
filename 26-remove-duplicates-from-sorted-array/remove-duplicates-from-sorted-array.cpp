class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int toPlace = 0;
        int i = 1;

        for (i; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[toPlace++] = nums[i - 1];
            }
        }
        nums[toPlace++] = nums.back();

        return toPlace;
    }
};