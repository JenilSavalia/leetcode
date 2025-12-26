class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        vector<int> returnArr;
        unordered_map<int, int> mp;

        for (int i = 0; i < nums2.size(); i++) {
            int curr = nums2[i];
            for (int j = i + 1; j < nums2.size(); j++) {
                if (nums2[j] > curr) {
                    mp[curr] = nums2[j];
                    break;
                }
            }
        }

        for (int num : nums1) {
            if (mp[num] == 0) {
                returnArr.push_back(-1);
            } else {
                returnArr.push_back(mp[num]);
            }
        }
        return returnArr;
    }
};