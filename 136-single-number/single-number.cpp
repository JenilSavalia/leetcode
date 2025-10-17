class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> m;

        for (int y : nums) {
            m[y]++;
        }
        int retValue;
        for (auto x : m) {
            if (x.second == 1) {
                retValue = x.first;
                break;
            }
        }
        return retValue;
    }
};