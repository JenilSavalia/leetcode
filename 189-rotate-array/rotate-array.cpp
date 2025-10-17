class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp;
        int i;
        if (nums.size() == 1)
            return;
        k = k % nums.size();
        for (i = nums.size() - k; i < nums.size(); i++) {
            temp.push_back(nums[i]);
        }
        for (i = 0; i < nums.size() - k; i++) {
            temp.push_back(nums[i]);
        }
        for (i = 0; i < nums.size(); i++) {
            nums[i] = temp[i];
        }
        // return temp;
    }
};