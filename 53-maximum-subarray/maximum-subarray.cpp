class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int sum = 0;
        // int maxSum = INT_MIN;
        // int n = nums.size();
        // if(n==1) return nums[0];
        // for (int i = 0; i < n; i++) {
        //     sum = 0;
        //     for (int j = i; j < n; j++) {
        //         sum = sum + nums[j];
        //         maxSum = max(sum,maxSum);
        //     }
        // }
        // return maxSum;

        int maxSum = INT_MIN;
        int currentSum  = 0;

        for (int i = 0; i < nums.size(); i++) {
            currentSum += nums[i];

            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
            if (currentSum < 0) {
                currentSum = 0;
            }

        }

        return maxSum;
    }
};