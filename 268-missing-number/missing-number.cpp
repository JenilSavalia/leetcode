class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        map<int, int> m;
        for (int i = 0; i <= n; i++) {
            m.insert({i, 0});
        }
        for (int i = 0; i < n; i++) {
            m[nums[i]]++;
        }

        int retValue = 0;
        for (auto x : m) {
            cout << x.second << endl;
            if (x.second == 0) {
                retValue = x.first;
                break;
            }
        }
        return retValue;
    }
};