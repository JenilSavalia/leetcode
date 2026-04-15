class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // boyer-moore majority voting algorithm

        int candidate = nums[0];
        int count = 0;

        for(int x : nums){

            if(count == 0){
                candidate = x;
            }

            if(candidate == x){
                count++;
            }else{
                count--;
            }
        }

        count = 0;
        for(int x : nums){
            if(candidate == x) count++;
        }

        if(count > nums.size()/2){
            return candidate;
        }
        return candidate;
    }
};