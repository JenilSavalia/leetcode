class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {

        int sum = 0;
        unordered_map<int, int> mpp;

        int start = 0;
        int end = 0;
        int maxScore = 0;

        while (end < nums.size()) {

            sum += nums[end];
            mpp[nums[end]]++;

            while (mpp.size() != end - start + 1) {
                sum -= nums[start];
                mpp[nums[start]]--;
                if(mpp[nums[start]]==0){
                    mpp.erase(nums[start]);
                }
                start++;
            }
            maxScore = max(maxScore,sum);
            end++;
        }
        return maxScore;
    }
};