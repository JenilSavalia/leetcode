class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        generate(nums,0,0);
        return total;
    }
    int total = 0;
    void generate(vector<int>& nums, int sum, int index) {

        if(index==nums.size()){
            total+= sum;
            return;
        }

        // decision #1 -> take the current index
        generate(nums, sum^nums[index], index + 1);

        // decision #2 -> skip the current index
        generate(nums, sum, index + 1);
    }
};