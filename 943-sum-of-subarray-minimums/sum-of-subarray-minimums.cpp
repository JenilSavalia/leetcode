class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {

        // brute force

        // const int MOD = 1e9 + 7;
        // long long sum = 0;
        // for (int i = 0; i < arr.size(); i++) {
        //     int currentMin = arr[i];
        //     for (int j = i; j < arr.size(); j++) {
        //         currentMin = min(currentMin, arr[j]);
        //         sum = (sum + currentMin) % MOD;
        //     }
        // }
        // return sum;

        // optimal approach

        // we need to find next how far previous and next smaller element is
        // from arr[i] (each element)

        int n = arr.size();
        vector<int> nextSmallerIndex(n, n);
        vector<int> prevSmallerIndex(n, -1);

        // finding next smaller element's index

        stack<int> stk;
        for (int i = n - 1; i >= 0; i--) {
            while (!stk.empty() && arr[stk.top()] >= arr[i]) {
                stk.pop();
            }
            if (!stk.empty()) {
                nextSmallerIndex[i] = stk.top();
            }
            stk.push(i);
        }

        // finding prev smalller element's index

        stack<int> stk1;
        for (int i = 0; i < n; i++) {
            while (!stk1.empty() && arr[stk1.top()] > arr[i]) {
                stk1.pop();
            }
            if (!stk1.empty()) {
                prevSmallerIndex[i] = stk1.top();
            }
            stk1.push(i);
        }

        const int MOD = 1e9 + 7;
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            long long left = i - prevSmallerIndex[i];
            long long right = nextSmallerIndex[i] - i;
            sum += (arr[i] * right * left);
        }

        return sum % MOD;
    }
};
