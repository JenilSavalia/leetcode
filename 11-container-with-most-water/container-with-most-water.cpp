class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size()-1;
        long long maxArea = INT_MIN;
        while(left<right){
            long long area = min(heights[left],heights[right])*(right-left);
            if(area > maxArea){
                maxArea = area;
            }
            // maxArea = max(maxArea,);
            if(heights[left]>=heights[right]){
                right--;
            }else{
                left++;
            }
        }
        return maxArea;
    }
};