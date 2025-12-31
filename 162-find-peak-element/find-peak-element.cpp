class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        // linear solution is trivial, try using binary search
        // so intution behind using binary search is

        // we are given that nums[-1] = nums[n] = -∞
        // so at mid we would have two opions
        // 1. if nums[mid] > nums[mid+1]
        // in this case as element next to mid is less then mid,
        // so hill is going down stream and eventually it would go to - infinity
        // therefore we woulf shift right pointer to mid

        // 2. if nums[mid] < nums[mid+1]
        // in this case hill is going upstream, peak is above us
        // therefore we would shift our left pointer to mid

        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if ((mid == 0 || nums[mid] > nums[mid - 1]) &&
                (mid == nums.size() - 1 || nums[mid] > nums[mid + 1])) {
                return mid;
            }

            // going downstream , peak is above (left side)
            if (nums[mid] > nums[mid + 1]) {
                right = mid - 1;
            } else {
                // going upstream  , peak is on right side
                left = mid + 1;
            }
        }

        return -1;

        // int returnIndex = 0;
        // for (int i = 0; i < nums.size(); i++) {
        //     int left = (i == 0) ? INT_MIN : nums[i - 1];
        //     int right = (i == nums.size() - 1) ? INT_MIN : nums[i + 1];
        //     if (nums[i] > left && nums[i] > right) {
        //         returnIndex = i;
        //         break;
        //     }
        // }
        // return returnIndex;
    }
};