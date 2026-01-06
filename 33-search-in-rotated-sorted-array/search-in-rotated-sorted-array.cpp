class Solution {
public:
    int search(vector<int>& nums, int target) {

        // binary search it is baby....

        // ae we are giev a rotated array
        // so when we find the mid, we would check which half is sorted
        // is left half sorted i.e   nums[left] < nums[mid] // then right is
        // unsorted if it is sorted we would check if out target liest b/w
        // nums[left] and nums[mid-1] i.e  nums[left] <= target <= nums[mid-1]
        // then we would whift our right pointer ; right = mid -1 i.e we are
        // selecting left half

        // if we are not able to find target in left range
        // we would continue woth right range
        // i.e left = mid+1

        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                return mid;
            }
            // check if left half is sorted
            if (nums[left] <= nums[mid]) {
                if (nums[left] <= target && target < nums[mid]) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            } // if left half is not sorted then it means it has pivot and therefore right half is sorted
            else {
                if (nums[mid] < target && target <= nums[right]) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
        }
        return -1;
    }
};