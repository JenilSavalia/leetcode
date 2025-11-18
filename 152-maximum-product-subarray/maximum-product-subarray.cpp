class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if (nums.size() == 1)
            return nums[0];
        int maxProduct = INT_MIN;
        int currProduct = 1;

        for (int i = 0; i < nums.size(); i++) {
            currProduct = nums[i];
            maxProduct = max(maxProduct, currProduct);
            for (int j = i + 1; j < nums.size(); j++) {
                currProduct *= nums[j];
                maxProduct = max(maxProduct, currProduct);
            }
        }
        return maxProduct;
    }
};