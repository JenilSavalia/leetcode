class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        // using two sets
    
        // unordered_set<int> st1;
        // unordered_set<int> st2;
        // vector<int> inter;

        // for (int num : nums1) {
        //     st1.insert(num);
        // }
        // for (int num : nums2) {
        //     st2.insert(num);
        // }

        // for (int num : st1) {

        //     if(st2.find(num) != st2.end()){
        //         inter.push_back(num);
        //     }
        // }
        // return inter;


        // using bitset vector

        const int MAX_VAL = 1001;
        bitset<MAX_VAL> bs;
        unordered_set<int> st;

        for(int num : nums1){
            bs.set(num);
        }

        for(int num : nums2){
            if(bs.test(num)){
                st.insert(num);
            }
        }

        return vector<int> (st.begin(),st.end());

    }
};