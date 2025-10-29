class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int limit =  n/3;
        map<int,int> mpp;
        for(int x : nums){
            mpp[x]++;
        }
        vector<int> major;
        for(auto y : mpp){
            if(y.second > limit){
                major.push_back(y.first);
            }
        }
        return major;
    }
};