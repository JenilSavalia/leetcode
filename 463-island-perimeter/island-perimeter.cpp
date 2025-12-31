class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0;
        int rows = grid.size();
        int cols = grid[0].size();

        queue<pair<int, int>> q;
        vector<vector<bool>> visited(rows, vector<bool>(cols, false));

        int isFound = false;
        for (int i = 0; i < grid.size() && !isFound; i++) {
            for (int j = 0; j < grid[0].size() && !isFound; j++) {
                if (grid[i][j] == 1) {
                    q.push({i, j});
                    visited[i][j] = true;
                    isFound = true;
                }
            }
        }

        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();
            int sideBlocks = 4;

            // check upper block
            if (x > 0 && grid[x - 1][y] == 1) {
                sideBlocks--;
                if (!visited[x - 1][y]) {
                    visited[x - 1][y] = true;
                    q.push({x - 1, y});
                }
            }

            // check lower block
            if (x < rows - 1 && grid[x + 1][y] == 1) {
                sideBlocks--;
                if (!visited[x + 1][y]) {
                    visited[x + 1][y] = true;
                    q.push({x + 1, y});
                }
            }

            // check left block
            if (y  > 0 && grid[x][y - 1] == 1) {
                sideBlocks--;
                if (!visited[x][y - 1]) {
                    visited[x][y - 1] = true;
                    q.push({x, y - 1});
                }
            }

            // check right
            if (y < cols - 1 && grid[x][y + 1] == 1) {
                sideBlocks--;
                if (!visited[x][y + 1]) {
                    visited[x][y + 1] = true;
                    q.push({x, y + 1});
                }
            }

            perimeter += sideBlocks;
        }
        return perimeter;
    }
};