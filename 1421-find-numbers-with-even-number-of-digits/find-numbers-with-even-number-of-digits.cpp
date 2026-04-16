class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;

        for(int i=0;i<nums.size();i++){
            int cnt = 0;
            int tmp = nums[i];
            while(tmp>0){
                tmp = tmp/10;
                cnt++;
            }
            if(cnt%2==0) count++;
        }
        return count;
    }
};