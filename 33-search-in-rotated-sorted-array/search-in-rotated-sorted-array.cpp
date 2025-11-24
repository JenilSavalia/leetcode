class Solution {
public:
    int search(vector<int>& nums, int target) {

        int l = 0;
        int r = nums.size() - 1;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                if (target >= nums[0]) {
                    l = 0;
                    r = i;
                } else {
                    l = i + 1;
                    r = nums.size() - 1;
                }
                break;
            }
        }

        while (l <= r) {
            int mid = l + (r - l) / 2; // To prevent potential overflow
            if (nums[mid] > target) {
                r = mid - 1;
            } else if (nums[mid] < target) {
                l = mid + 1;
            } else {
                return mid;
            }
        }
        return -1;
    }
};