class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if (nums.size() == 0)
            return 0;

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

        // above method uses stl map which has O(log n) for insert, find, erase
        // so overall complexicity for above algorithm is O(nlogn)
        // int n = nums.size();
        // if (n == 0)
        //     return 0;

        // unordered_set<int> stt;
        // for (int x : nums) {
        //     stt.insert(x);
        // }

        // int longest = 1;

        // for (auto num : stt) {
        //     int x = num;
        //     int cnt = 1;
        //     if (stt.find(num - 1) == stt.end()) {
        //         while (stt.find(x + 1) != stt.end()) {
        //             x++;
        //             cnt++;
        //         }
        //         longest = max(longest, cnt);
        //     }
        // }
        // return longest;
    }
};