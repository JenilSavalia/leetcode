class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;

        for(int i=0;i<nums.size();i++){

            int to_find = target - nums[i];
            if(mpp.find(to_find) != mpp.end()){
                return {i,mpp[to_find]};
            }
            mpp.insert({nums[i],i});
        }
        return {};
    }
};