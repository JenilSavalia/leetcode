class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        int n = nums.size();
        stack<int> stk;
        vector<int> result(n, -1);

        for (int i = n * 2 - 1; i >= 0; i--) {

            while (!stk.empty() && nums[i % n] >= stk.top()) {
                stk.pop();
            }

            if (!stk.empty()) {
                result[i%n] = stk.top();
            }

            stk.push(nums[i%n]);
        }

        return result;
    }
};