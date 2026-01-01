class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> sortedMatrix;

        for(int i =0;i<matrix.size();i++){
            for(int j = 0;j<matrix[0].size();j++){
                sortedMatrix.push_back(matrix[i][j]);
            }
        }
        

        sort(sortedMatrix.begin(),sortedMatrix.end());
        // cout << sortedMatrix[k % sortedMatrix.size()] << " " << k;
        return sortedMatrix[(k - 1) % sortedMatrix.size()];
        
    }
};