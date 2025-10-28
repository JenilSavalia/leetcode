class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

if(nums.size()==0) return 0;

        map<int, int> mpp;
        for (int x : nums) {
            mpp[x]++;
        }

        int count = 1;
        int maxCount = 1;

        int prev = mpp.begin()->first;
        for (auto x : mpp) {

            if (x.first == prev + 1) {
                count++;
            } else {
                maxCount = max(count, maxCount);
                count = 1;
            }
            prev = x.first;
        }
        maxCount = max(maxCount, count);

        return maxCount;
    }
};