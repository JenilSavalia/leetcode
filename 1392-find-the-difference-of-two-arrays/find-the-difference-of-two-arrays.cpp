class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

        unordered_set<int> st1;
        unordered_set<int> st2;

        for (int x : nums1) {
            st1.insert(x);
        }

        for (int x : nums2) {
            st2.insert(x);
        }

        vector<vector<int>> returnVec;

        vector<int> tmp1;
        for (int x : st1) {
            if (st2.find(x) == st2.end()) {
                tmp1.push_back(x);
            }
        }
        returnVec.push_back(tmp1);

        vector<int> tmp2;
        for (int x : st2) {
            if (st1.find(x) == st1.end()) {
                tmp2.push_back(x);
            }
        }
        returnVec.push_back(tmp2);
        
        return returnVec;
    }
};