#include <algorithm>
#include <climits> // for INT_MAX
#include <vector>

class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {

        // count negative in each row
        // if count id even then => make all numbers positive
        // is odd then make count%2 numbers positive
        // one number will remain negative

        // then after above opetation in all rows
        // check if adjacent rows has 1 negative  count
        // then make that both rows positive

        int negativeCount = 0;
        long long smallest_absolute_num = INT_MAX;
        long long sum = 0;

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                sum += abs(matrix[i][j]);
                smallest_absolute_num =
                    min(smallest_absolute_num, (long long)abs(matrix[i][j]));
                if (matrix[i][j] < 0) {
                    negativeCount++;
                }
            }
        }

        return negativeCount % 2 == 0 ? sum : (sum - smallest_absolute_num * 2);
    }
};