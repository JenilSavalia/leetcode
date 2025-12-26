class Solution {
public:
    bool canJump(vector<int>& nums) {
        int x = nums.size() - 1;
        int i = nums.size() - 1;
        while (i >= 0) {
            if (nums[i] >= x - i ) {
                x = i;
            }
            i--;
        }

        cout << x;
        if(x == 0){
            return true;
        }else{
            return false;
        }
    }
};