class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {

        // we need to find the NGE , PGE , NSE , PSE

        int n = nums.size();
        vector<int> NSE(n, n);
        vector<int> PSE(n, -1);

        vector<int> NGE(n, n);
        vector<int> PGE(n, -1);

        stack<int> stk;
        int i = n - 1;

        // finding NSE
        for (i; i >= 0; i--) {
            while (!stk.empty() && nums[stk.top()] > nums[i]) {
                stk.pop();
            }
            if (!stk.empty())
                NSE[i] = stk.top();
            stk.push(i);
        }

        // finding PSE
        stack<int> stk1;
        i = 0;
        for (i; i < n; i++) {
            while (!stk1.empty() && nums[stk1.top()] >= nums[i]) {
                stk1.pop();
            }
            if (!stk1.empty())
                PSE[i] = stk1.top();
            stk1.push(i);
        }

        // finding NGE
        stack<int> stk2;
        i = n - 1;
        for (i; i >= 0; i--) {
            while (!stk2.empty() && nums[stk2.top()] < nums[i]) {
                stk2.pop();
            }
            if (!stk2.empty())
                NGE[i] = stk2.top();
            stk2.push(i);
        }

        // finding PGE
        stack<int> stk3;
        i = 0;
        for (i; i < n; i++) {
            while (!stk3.empty() && nums[stk3.top()] <= nums[i]) {
                stk3.pop();
            }
            if (!stk3.empty())
                PGE[i] = stk3.top();
            stk3.push(i);
        }

        long long minSum = 0;
        long long maxSum = 0;
        i = 0;
        for (i; i < n; i++) {
            long long minLeft = i - PSE[i];
            long long minRight = NSE[i] - i;

            long long maxLeft = i - PGE[i];
            long long maxRight = NGE[i] - i;
            minSum += ((long long)nums[i] * minLeft * minRight);
            maxSum += ((long long)nums[i] * maxLeft * maxRight);
        }

        return maxSum - minSum;
    }
};