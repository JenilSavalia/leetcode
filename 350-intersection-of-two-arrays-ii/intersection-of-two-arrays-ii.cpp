class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int> mp;
        
        // if(nums1.size() > nums.size()){
            for(int x : nums1){
                mp[x]++;
            }
        // }

        vector<int> inter;

        for(int x : nums2){
            if(mp.find(x) != mp.end() && mp[x] > 0){
                inter.push_back(x);
                mp[x]--;
            }
        }

        return inter;

    }
};