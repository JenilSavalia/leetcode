class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> st;

        for (int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }

        vector<int> rslt;

        for (int i = 1; i <= nums.size(); i++) {
            if(st.find(i) == st.end()){
                rslt.push_back(i);
            }
        }

        return rslt;
    }
};