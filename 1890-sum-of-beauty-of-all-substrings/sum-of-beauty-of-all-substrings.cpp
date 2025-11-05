class Solution {
public:
    int beautySum(string s) {
        int n = s.length();
        int beauty = 0;
        for (int i = 0; i < n; i++) {
            map<char, int> m;
            for (int j = i; j < n; j++) {
                m[s[j]]++;
                // if (j - i > 2) {
                    int maxfreq = INT_MIN;
                    int minfreq = INT_MAX;

                    for (auto it : m) {
                        maxfreq = max(maxfreq, it.second);
                        minfreq = min(minfreq, it.second);
                    }
                    beauty += (maxfreq - minfreq);
                // }
            }
        }

        return beauty;
    }
};