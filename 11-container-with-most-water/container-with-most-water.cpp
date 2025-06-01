
class Solution {
public:
    int maxArea(vector<int>& height) {

        // Brute Force O(n**2)

        // long long maxArea = 1LL * 0;

        // for (int i = 0; i < height.size(); i++) {
        //     for (int j = i + 1; j < height.size(); j++) {
        //         long long area = 1LL * min(height[i],height[j]) * (j-i);
        //         if(area>maxArea){
        //             maxArea = area;
        //         }
        //     }
        // }
        // return maxArea;

        // Optimal Soultion O(n)

        int left = 0;
        int right = height.size() - 1;
        long long maxArea = 1LL * 0;

        while (left < right) {
            long long area =
                1LL * min(height[left], height[right]) * (right - left);
            maxArea = max(area, maxArea);

            height[left] < height[right] ? left++ : right--;
        }

        return maxArea;
    }
};