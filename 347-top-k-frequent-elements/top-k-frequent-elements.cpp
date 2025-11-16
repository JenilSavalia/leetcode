class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freq;
        priority_queue<pair<int, int>> pq;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        for (auto x : freq) {
            pq.push({x.second, x.first});
        }

        int c = 0;
        while (!pq.empty()) {
            if (c == k)
                break;
            result.push_back(pq.top().second);
            pq.pop();
            c++;
        }

        return result;
    }
};