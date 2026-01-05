class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int left_occurance = -1;
        int right_occurance = -1;

        while (left <= right) {
            int mid = left + ((right - left) / 2);

            if (nums[mid] == target) {
                left_occurance = mid;
                right = mid - 1;
            }

            else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        // finding right occurannce
        left = 0;
        right = nums.size() - 1;

        while (left <= right) {
            int mid = left + ((right - left) / 2);
            if (nums[mid] == target) {
                right_occurance = mid;
                left = mid + 1;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return {left_occurance, right_occurance};
    }
};