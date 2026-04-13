class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int left = 0;
        int right = nums.size()-1;

        vector<int> result(nums.size());
        int index = nums.size()-1;

        while(left<=right){
            if(abs(nums[left])>abs(nums[right])){
                result[index] = nums[left]*nums[left];
                left++;
                index--;
            }else{
                result[index] = nums[right]*nums[right];
                right--;
                index--;
            }
        }
        return result;
    }
};