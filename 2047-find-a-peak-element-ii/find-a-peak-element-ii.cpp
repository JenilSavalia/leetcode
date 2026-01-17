class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[0].size(); j++) {
                int up = (i - 1 >= 0) ? i - 1 : -1;
                int down = (i + 1 < mat.size()) ? i + 1 : -1;
                int left = (j - 1 >= 0) ? j - 1 : -1;
                int right = (j + 1 < mat[0].size()) ? j + 1 : -1;

                bool isPeak = true;

                if (up != -1 && mat[up][j] >= mat[i][j])
                    isPeak = false;

                if (down != -1 && mat[down][j] >= mat[i][j])
                    isPeak = false;

                if (left != -1 && mat[i][left] >= mat[i][j])
                    isPeak = false;

                if (right != -1 && mat[i][right] >= mat[i][j])
                    isPeak = false;

                if (isPeak) {
                    return {i, j};
                }
            }
        }
        return {-1, -1};
    }
};