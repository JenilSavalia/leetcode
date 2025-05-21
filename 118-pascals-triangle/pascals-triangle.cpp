class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> result = {{1}, {1, 1}};

        if (numRows == 1)
            return {{1}};
        if (numRows == 2)
            return {{1}, {1, 1}};

        if (numRows > 2) {
            for (int i = 3; i <= numRows; i++) {
                vector<int> temp;
                for (int j = 0; j < i - 2; j++) {
                    temp.push_back(result[i-2][j] + result[i-2][j + 1]);
                }
                temp.push_back(1);
                temp.insert(temp.begin(), 1);
                result.push_back(temp);
            }
        }

        return result;
    }
};