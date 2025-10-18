class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
    int SumCount = 0;
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        SumCount = nums[i];
        if(nums[i]==k){
            count++;
        }
        for (int j = i + 1; j < nums.size(); j++)
        {
            SumCount += nums[j];
            if (SumCount == k)
            {
                count++;
            }
        }
    }
    return count;

    }
};