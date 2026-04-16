class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        // brute force

        // int maxSum = 0;
        // for(int i=0;i<nums.size();i++){
        //     int sum = 0;
        //     for(int j=i;j<nums.size();j++){
        //         sum += nums[j];
        //         maxSum = max(sum,maxSum);
        //     }
        // }
        // return maxSum;

        if(nums.size()==1) return nums[0];

        int sum = 0;
        int maxSum = INT_MIN;

        for(int i=0;i<nums.size();i++){
            sum += nums[i];

            maxSum = max(sum,maxSum);
            if(sum < 0) sum = 0;
        }
        return maxSum;
    }
};