class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum = 0;
        for (int x : nums)
            sum += x;


        int start = 0;
        int end = 0;
        int target = sum - x;

        if(target < 0) return -1;

        int maxLen = -1;

        int dynamicSum = 0;
        while (end < nums.size()) {
            dynamicSum += nums[end];

            while (dynamicSum > target && start<=end) {
                dynamicSum -= nums[start];
                start++;
            }

            if (dynamicSum == target){
                maxLen = max(maxLen,end-start+1);
            }
            
            end++;
        }
        cout << maxLen;
        return maxLen==-1 ? -1 : nums.size() - (maxLen);
    }
};