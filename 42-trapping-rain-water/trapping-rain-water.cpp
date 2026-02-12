class Solution {
public:
    int trap(vector<int>& height) {

        int water = 0;

        // in order to find the area of water, formula would be
        // min(PrefixMax[i],suffixMax[i]) - height[i]

        int n = height.size();

        vector<int> prefixMax(n);
        vector<int> suffixMax(n);

        prefixMax[0] = height[0];

        // calcualting prefix max of each element
        for (int i = 1; i < n; i++) {
            prefixMax[i] = max(height[i], prefixMax[i - 1]);
        }

        suffixMax[n - 1] = height[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            suffixMax[i] = max(height[i], suffixMax[i + 1]);
        }

        for (int i = 0; i < n; i++) {
            int val = min(prefixMax[i], suffixMax[i]) - height[i];
            if (val > 0) {
                water += min(prefixMax[i], suffixMax[i]) - height[i];
            }
        }

        return water;
    }
};