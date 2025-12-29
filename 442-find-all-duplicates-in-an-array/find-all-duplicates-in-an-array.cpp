class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int num : nums){
            mp[num]++;
        }

        vector<int> rslt;
        for(auto x : mp){
            if(x.second == 2){
                rslt.push_back(x.first);
            }
        }
        return rslt;
    }
};