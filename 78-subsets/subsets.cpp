class Solution {
public:
    void generate(vector<int> nums, vector<vector<int>>& result,
                  vector<int> &subset, int index) {

        // if(index >= nums.size()){
        //     result.push_back(subset);
        //     return;
        // }

        // // pick
        // subset.push_back(nums[index]);
        // generate(nums,result,subset,index+1);

        // // dont pick
        // subset.pop_back();
        // generate(nums,result,subset,index+1);

        // for loop method

        result.push_back(subset);

        for (int i = index; i < nums.size(); i++) {
            subset.push_back(nums[i]);
            generate(nums, result, subset, i + 1);
            subset.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> result;
        vector<int> subset;

        generate(nums, result, subset, 0);

        return result;
    }
};