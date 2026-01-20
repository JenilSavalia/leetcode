class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {

        vector<int> result(nums.size(),-1);

        for(int i=0;i<nums.size();i++){
            for(int j=0;j<=nums[i];j++){
                if((j | (j+1)) == nums[i]){
                    result[i] = j;
                    break;
                }
            }
        }

        return result;

    }
};