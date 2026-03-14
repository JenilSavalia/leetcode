class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {

        unordered_map<char, int> mpp;
        for (char x : tasks) {
            mpp[x]++;
        }
        priority_queue<int> que;
        for (auto x : mpp) {
            que.push(x.second);
        }

        int interval = 0;

        while (!que.empty()) {

            vector<int> temp;
            int cycle = n + 1;

            while (!que.empty() && cycle) {

                int cnt = que.top();
                que.pop();

                if (cnt - 1 > 0) {
                    temp.push_back(cnt - 1);
                }
                cycle--;
                interval++;
            }

            for (int x : temp) {
                que.push(x);
            }
            if (que.empty())
                break;

            interval += cycle;
        }
        return interval;
    }
};