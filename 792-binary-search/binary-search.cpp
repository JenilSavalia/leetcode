class Solution {
    // int BinarySearch(int l, int r, vector<int> arr, int key) {
    //     if (l > r)
    //         return -1;

    //     int mid = l + (r - l) / 2;
    //     if (arr[mid] == key) {
    //         return mid;
    //     }

    //     if (arr[mid] > key) {
    //         return BinarySearch(l, mid - 1, arr, key);
    //     } else {
    //         return BinarySearch(mid+1, r, arr, key);
    //     }
    // }

public:
    int search(vector<int>& nums, int target) {
        // int left = 0;
        // int right = nums.size() - 1;
        // return BinarySearch(left, right, nums, target);

        int l = 0;
        int r = nums.size() - 1;

        while (l <= r) {
        int mid = l + (r - l) / 2;

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