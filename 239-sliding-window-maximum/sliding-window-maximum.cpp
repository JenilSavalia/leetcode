class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        deque<int> que;
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {

            // remove indicices outside from window

            while(!que.empty() && que.front() < i+1-k){
                que.pop_front();
            }


            while (!que.empty() && nums[i] > nums[que.back()]) {
                que.pop_back();
            }
            // add current index
            que.push_back(i);

            if(i+1>=k){
                result.push_back(nums[que.front()]);
            }

        }
        return result;
    }
};