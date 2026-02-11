class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        if(heights.size() == 1){
            return heights[0];
        }
        if(heights.size() == 0) return 0;

        int maxArea = 0;
        int n = heights.size();
        vector<int> nextSmall(n);
        vector<int> prevSmall(n);

        // we need to find the next smallest element and previous smallest
        // element

        stack<int> stk;

        // finding next smallest emelent (increasing stack)
        for (int i = heights.size() - 1; i >= 0; i--) {

            while (!stk.empty() && heights[i] <= heights[stk.top()]) {
                stk.pop();
            }

            stk.empty() ? nextSmall[i] = n : nextSmall[i] = stk.top();

            stk.push(i);
        }

        // finding previous smallest element (increasing stack)
        stack<int> stk1;

        for (int i = 0; i < heights.size(); i++) {

            while (!stk1.empty() && heights[stk1.top()] >= heights[i]) {
                stk1.pop();
            }
            stk1.empty() ? prevSmall[i] = -1 : prevSmall[i] = stk1.top();

            stk1.push(i);
        }

        for (int i = 0; i < heights.size(); i++) {
            int area = heights[i] * (nextSmall[i] - prevSmall[i] - 1);
            maxArea = max(area, maxArea);
        }
        return maxArea;
    }
};