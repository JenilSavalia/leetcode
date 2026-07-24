class Solution {
public:

    void backtrack(int index,vector<int> &subset,vector<vector<int>> &result,vector<int> &nums){
        
        if(index>=nums.size()){
            result.push_back(subset);
            return;
        }

        // pick
        subset.push_back(nums[index]);
        backtrack(index+1,subset,result,nums);
        subset.pop_back();

        // dont pick
        backtrack(index+1,subset,result,nums);

    }

    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> result;
        vector<int> subset;

        backtrack(0,subset,result,nums);
        return result;

    }
};