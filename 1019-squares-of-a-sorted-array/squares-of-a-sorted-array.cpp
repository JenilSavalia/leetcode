class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n,0);
        int k = n - 1;

        int i = 0;
        int j = n - 1;

        while (i <= j) {
            if (nums[i] * nums[i]    > nums[j] * nums[j]) {
                result[k] = nums[i] * nums[i];
                i++;
                k--;
            } else {
                result[k] = nums[j] * nums[j];
                j--;
                k--;
            }
        }

        return result;
    }
};