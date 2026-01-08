class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left = 0;
        int right = matrix.size() - 1;
        int row = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (matrix[mid][0] <= target &&
                matrix[mid][matrix[0].size() - 1] >= target) {
                // run binary search
                row = mid;
                break;
            }

            if (matrix[mid][0] <= target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        left = 0;
        right = matrix[0].size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (matrix[row][mid] == target) {
                return true;
            }

            if (matrix[row][mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return false;
    }
};