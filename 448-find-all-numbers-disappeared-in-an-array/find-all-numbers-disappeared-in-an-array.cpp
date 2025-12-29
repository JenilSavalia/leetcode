class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // unordered_set<int> st;

        // for (int i = 0; i < nums.size(); i++) {
        //     st.insert(nums[i]);
        // }

        // vector<int> rslt;

        // for (int i = 1; i <= nums.size(); i++) {
        //     if(st.find(i) == st.end()){
        //         rslt.push_back(i);
        //     }
        // }

        // return rslt;

        // cyclic sort
        int i = 0;
        while (i < nums.size()) {
            int correct = nums[i] - 1;
            if (nums[i] != nums[correct]) {
                swap(nums[i], nums[correct]);
            } else {
                i++;
            }
        }

        vector<int> rslt;
         i = 0;
        while (i < nums.size()) {
            if(nums[i] != i+1){
                rslt.push_back(i+1);
            }
            i++;
        }

        return rslt;
    }
};