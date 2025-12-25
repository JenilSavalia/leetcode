class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end(),
             [](const int a, const int b) { return a > b; });

        long long maxHapp = 0;

        long long tmpK = k;

        int i = 0;
        while (i < happiness.size() && tmpK > 0) {
            if(happiness[i] - (i) < 0){
                happiness[i] = 0;
            }else{
            happiness[i] -= i;
            }
            maxHapp += happiness[i];
            tmpK--;
            // for (int j = i; j < happiness.size(); j++) {
            //     if (happiness[j] > 0) {
            //         happiness[j] -= 1;
            //     }
            // }
            i++;
        }
        return maxHapp;
    }
};