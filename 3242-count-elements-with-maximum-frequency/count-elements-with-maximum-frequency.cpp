#include <map>
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        int max = 0;
        for (auto x : freq) {
            if (x.second > max) {
                max = x.second;
            }
        }
        int count = 0;
        for (auto x : freq) {
            if (x.second == max) {
                count+=max;
            }
        }
        return count;
    }
};