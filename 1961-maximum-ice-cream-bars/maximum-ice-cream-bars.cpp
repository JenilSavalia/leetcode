class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int BuyCount = 0;
        // int BuyCost = 0;

        sort(costs.begin(), costs.end());
        for (int i = 0; i < costs.size(); i++) {
            if(costs[i]>coins) continue;
            if (coins<=0){
                break;
            }
                coins -= costs[i];
                BuyCount++;
        }
        return BuyCount;
    }
};