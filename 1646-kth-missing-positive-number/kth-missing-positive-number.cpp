class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        if (arr[arr.size() - 1] == arr.size()) {
            return arr[arr.size() - 1] + k;
        }

        int left = 0;
        int right = arr.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            int missingLeft = arr[mid] - (mid + 1);

            if (missingLeft < k) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return right + 1 + k;
    }
};