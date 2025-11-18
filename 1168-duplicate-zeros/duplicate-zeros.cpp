class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        queue<int> q;
        int i = 0;

        while (i < arr.size()) {
            q.push(arr[i]);

            if (arr[i] == 0) {
                q.push(0);
            }

            arr[i] = q.front();
            q.pop();

            i++;
        }
    }
};