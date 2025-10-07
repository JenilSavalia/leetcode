class Solution {
public:
    int specialArray(vector<int>& nums) {
        int x=0;
        int ans = -1;
        while(x <= nums.size()){
            int count = 0;
            for(int i=0; i<nums.size(); i++){
                if(nums[i] >= x){
                    count++;
                }
            }
            if(count == x){
                ans = x;
            }
            x++;
        }
        return ans;
    }
};