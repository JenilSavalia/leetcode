class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        // Brute Foce Approach
        int SumCount = 0;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            SumCount = nums[i];
            if (nums[i] == k) {
                count++;
            }
            for (int j = i + 1; j < nums.size(); j++) {
                SumCount += nums[j];
                if (SumCount == k) {
                    count++;
                }
            }
        }
        return count;

        // Using Better approach : PREFIX SUM using hashmap
        // map<int, int> prefixSum;
        // int len = 0;
        // int sum = 0;

        // for (int i = 0; i < nums.size(); i++) {
        //     sum += nums[i];
        //     if (sum == k) {
        //         len++;
        //     }
        //     int remaining = sum - k;
        //     if (prefixSum.find(remaining) != prefixSum.end()) {
        //         len++;
        //     }
        //     if (prefixSum.find(sum) == prefixSum.end()) {
        //         prefixSum[sum] = i;
        //     }
        // }
        // return len;
    }
};