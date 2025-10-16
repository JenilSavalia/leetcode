class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 0;
        int right = 1;
        int k=0;
        while (right < nums.size()) {
            if (nums[right] != nums[left]) {
                left++;
                nums[left] = nums[right];
                k++;
            }
            right++;
        }
        return left+1;
    }
};