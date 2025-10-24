class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int profit = 0;
        // int n = prices.size();
        // for (int i = 0; i < n; i++) {
        //     for (int j = i + 1; j < n; j++) {
        //         profit = max(profit,prices[j]-prices[i]);
        //     }
        // }
        // if(profit<0){
        //     return 0;
        // }else{
        //     return profit;
        // }

        int min_price = INT_MAX;
        int max_profit = INT_MIN;

        for (int x : prices) {
            min_price = min(x, min_price);

            max_profit = max(x - min_price, max_profit);
        }

        return max_profit;
    }
};