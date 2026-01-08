class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (int x = 0; x < matrix.size(); x++) {
            if (matrix[x][0] <= target &&
                matrix[x][matrix[0].size() - 1] >= target) {
                int l = 0;
                int r = matrix[0].size() - 1;

                while (l <= r) {
                    int mid = l + (r - l) / 2;
                    if (matrix[x][mid] == target) {
                        return true;
                    }
                    if (matrix[x][mid] > target) {
                        r = mid - 1;
                    } else {
                        l = mid + 1;
                    }
                }
            }
        }
        return false;
    }
};