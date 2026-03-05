class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxVal = INT_MIN;
        double sum = 0;

        for(int i=0;i<nums.size();i++){
            sum += nums[i];

            if(i+1>=k){
                maxVal = max(maxVal,sum);
                sum -= nums[i+1-k];
            }
        }

        return maxVal / k;
    }
};