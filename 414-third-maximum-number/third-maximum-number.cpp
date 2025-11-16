class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;
        for (int x : nums) {
            s.insert(x);
        }
        auto it = next(s.begin(), s.size() - 3);
        if (s.size() < 3) {
            auto it = next(s.begin(), s.size() - 1);
            return *it;
        }
        return *it;
    }
};