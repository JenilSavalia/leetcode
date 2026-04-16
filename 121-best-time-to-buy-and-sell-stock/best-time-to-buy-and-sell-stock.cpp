class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_till_now = INT_MAX;

        int maxProfit = 0;

        for(int x : prices){
            maxProfit = max(maxProfit,x-min_till_now);
            min_till_now = min(min_till_now,x);
            cout << min_till_now << endl;
        }

        return maxProfit;
    }
};