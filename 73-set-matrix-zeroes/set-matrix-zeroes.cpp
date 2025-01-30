class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int m = matrix.size(), n = matrix[0].size();
        vector<int> row, col;

        // Step 1: Store the indices of zeroes
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }

        // Step 2: Zero out rows
        for (int r : row) {
            for (int j = 0; j < n; j++) {
                matrix[r][j] = 0;
            }
        }

        // Step 3: Zero out columns
        for (int c : col) {
            for (int i = 0; i < m; i++) {
                matrix[i][c] = 0;
            }
        }
    }

        //     vector<int> row = {};
        // vector<int> col = {};

        // for (int i = 0; i < matrix.size(); i++) {
        //     for (int j = 0; j < matrix[0].size() ; j++) {
        //         if (matrix[i][j] == 0) {
        //             row.push_back(i);
        //             col.push_back(j);
        //             // cout<<i<<j<<" ";
        //         }
        //     }
        // }

        // // for row
        // for (int k = 0; k < matrix.size(); k++) {
        //     for (int b = 0; b < row.size(); b++) {
        //         matrix[row[b]][k] = 0;
        //     }
        // }

        // // for col
        // for (int m = 0; m < matrix[0].size(); m++) {
        //     for (int c = 0; c < col.size(); c++) {
        //         matrix[m][col[c]] = 0;
        //     }
        // }
    
};