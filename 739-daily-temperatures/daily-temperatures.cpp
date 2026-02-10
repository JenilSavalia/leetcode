class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {

        stack<pair<int, int>> stk; // {temperature, index}
        vector<int> result(temp.size(), 0);

        for (int i = temp.size() - 1; i >= 0; i--) {

            while (!stk.empty() && temp[i] >= stk.top().first) {
                stk.pop();
            }

            stk.empty() ? result[i] = 0 : result[i] = stk.top().second - i;

            stk.push({temp[i], i});
        }

        return result;
    }
};