class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        stack<int> stk;

        for (int i = nums2.size() - 1; i >= 0; i--) {

            while (!stk.empty() && nums2[i] > stk.top()) {
                stk.pop();
            }

            stk.empty() ? mp[nums2[i]] = -1 : mp[nums2[i]] = stk.top();

            stk.push(nums2[i]);
        }

        vector<int> result;

        for (int x : nums1) {
            result.push_back(mp[x]);
        }

        return result;
    }
};