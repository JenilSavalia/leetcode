class Solution {
    // return true if the first element should come before the second in the
    // sorted order.
    // bool compare(vector<int> a, vector<int> b) {
    //     return a[0] < b[0]; // a comes before b if a is lesser than b
    // }

public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        if (intervals.size() == 1)
            return intervals;

        sort(intervals.begin(), intervals.end());
        vector<vector<int>> result;
        result.push_back(intervals[0]);

        int n = intervals.size();
        for (int i = 1; i < n; i++) {
            if (result.back()[1] >= intervals[i][0]) {
                result.back()[1] = max(result.back()[1], intervals[i][1]);
            } else {
                result.push_back(intervals[i]);
            }
        }
        return result;
    }
};