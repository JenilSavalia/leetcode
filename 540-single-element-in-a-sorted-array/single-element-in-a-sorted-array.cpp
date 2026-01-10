class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (mid > 0 && mid < nums.size() - 1 &&
                nums[mid - 1] != nums[mid] && nums[mid + 1] != nums[mid]) {
                return nums[mid];
            }

            if (mid > 0 && nums[mid - 1] == nums[mid]) {
                if (mid % 2 != 0) {
                    left = mid + 1;
                } else {
                    right = mid - 2;
                }
            }

            if (mid < nums.size() - 1 && nums[mid] == nums[mid + 1]) {
                if ((mid + 1) % 2 != 0) {
                    left = mid + 2;
                } else {
                    right = mid - 1;
                }
            }
        }
        return nums[left];
    }
};