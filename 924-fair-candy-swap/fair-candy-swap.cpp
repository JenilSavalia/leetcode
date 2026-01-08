class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumA = accumulate(aliceSizes.begin(), aliceSizes.end(), 0);
        int sumB = accumulate(bobSizes.begin(), bobSizes.end(), 0);

        for (int a : aliceSizes) {
            for (int b : bobSizes) {
                if (sumA - a + b == sumB - b + a){
                    return {a,b};
                }
            }
        }
        return {};
    }
};