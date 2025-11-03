class Solution {
    // bool cmp(pair<char, int>& a, pair<char, int>& b) {
    //     return a.second < b.second;
    // }

public:
    string frequencySort(string s) {
        unordered_map<char, int> m;
        vector<pair<char, int>> v;
        for (char x : s) {
            m[x]++;
        }
        for (auto x : m) {
            v.push_back(x);
        }

        // Sort by descending frequency
        sort(v.begin(), v.end(),
             [](const pair<char, int>& a, const pair<char, int>& b) {
                 return a.second > b.second;
             });

        string result;
        for (auto x : v) {
            if (x.second > 1) {
                for (int j = 0; j < x.second; j++) {
                    result += x.first;
                }
            } else {
                result += x.first;
            }
        }

        return result;
    }
};