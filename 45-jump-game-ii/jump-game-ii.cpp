class Solution {
public:
    int jump(vector<int>& nums) {
        int i = 0;
        int steps = 0;

        int currEnd = 0;

        int furtherPoint = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            furtherPoint = max(furtherPoint, i + nums[i]);  

            if(i == currEnd){
                currEnd = furtherPoint;
                steps++;

                if(currEnd >= nums.size() - 1) break;   
            }

        }

        return steps;
    }
};