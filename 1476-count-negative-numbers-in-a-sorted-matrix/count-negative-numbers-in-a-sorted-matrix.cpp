class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for (int i = 0; i < grid.size(); i++) {
            int j = grid[i].size()-1;
            for (j;j>=0;j--){
                if(grid[i][j] > 0) break;
                if(grid[i][j] < 0) count++;
            }
        }
        return count;
    }
};