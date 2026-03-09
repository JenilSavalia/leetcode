class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        int count = 0;
        int start = 0;
        int end = 0;

        int maxLen = 0;

        while(end < nums.size()){
            if(nums[end]==0) count++;

            while(count > 1){
                if(nums[start]==0) count--;
                start++;
            }

            maxLen = max(maxLen,end-start+1);
            end++;
        }
        return maxLen-1;
    }
};