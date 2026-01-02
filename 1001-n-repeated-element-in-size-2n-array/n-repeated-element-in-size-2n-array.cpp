class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        // value od n is nums.length / 2


        int n = nums.size() / 2;
        unordered_map<int,int> mp;

        for(int num : nums){
            mp[num]++;
            if(mp[num] == n){
                return num;
            }
        }
        return -1;
    }
};