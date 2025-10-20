class Solution {
public:
    int majorityElement(vector<int>& nums) {

        map<int, int> mpp;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            mpp[nums[i]]++;
        }

        int max = nums[0];
        int maxFreq = 0;
        for (auto x : mpp) {
            if(x.second>maxFreq){
                maxFreq = x.second;
                max= x.first;
            }
        }
        return max;
    }
};