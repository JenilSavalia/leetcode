class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_set<int> st1;
        unordered_set<int> st2;
        vector<int> inter;

        for (int num : nums1) {
            st1.insert(num);
        }
        for (int num : nums2) {
            st2.insert(num);
        }

        for (int num : st1) {

            if(st2.find(num) != st2.end()){
                inter.push_back(num);
            }
        }
        return inter;
    }
};