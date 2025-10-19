class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mpp;

        for (int i = 0; i < n; i++) {
            mpp[nums[i]]++;
        }
        // cout << mpp[0]<<endl;
        for (int i = 0; i < mpp[0]; i++) {
            nums[i] = 0;
        }

        for (int i = mpp[0]; i < mpp[0] + mpp[1]; i++) {
            nums[i] = 1;
        }

        for (int i = mpp[0] + mpp[1]; i < n; i++) {
            nums[i] = 2;
        }
    }
};