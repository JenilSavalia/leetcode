class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {

        vector<int> discount = prices;
        stack<int> stk;

        // we need to find next smaller element
        for (int i = prices.size() - 1; i >= 0; i--) {

            while (!stk.empty() && stk.top() > prices[i]) {
                stk.pop();
            }

            if (!stk.empty()) {
                discount[i] = prices[i] - stk.top();
            }

            stk.push(prices[i]);
        }

        return discount;
    }
};