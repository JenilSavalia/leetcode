class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {

        vector<int> value = {};

        for (int i = 0; i < s.length(); i++) {
            for (int j = i + 1; j < s.length(); j++) {
                if (s[i] == s[j]) {
                    value.push_back(j - i - 1);
                    // cout<<j-i-1<<" ";
                }
            }
        }

        if (value.size() == 0) {
            cout << -1;
            return -1;
        } else {
            sort(value.begin(), value.end());
            // cout<<value[value.size()-1];
            return value[value.size() - 1];
        }
    }
};