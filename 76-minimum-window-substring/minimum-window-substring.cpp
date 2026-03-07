class Solution {
public:
    string minWindow(string s, string t) {

        // ✅ Rule of thumb
        // If problem asks:
        // LONGEST → shrink when invalid
        // SMALLEST/MINIMUM → shrink while valid

        unordered_map<char, int> compare_;
        unordered_map<char, int> check;

        for (char x : t) {
            compare_[x]++;
        }

        int start = 0;
        int window_count = 0;

        int minLen = INT_MAX;
        int minStart = 0;
        for (int end = 0; end < s.size(); end++) {

            check[s[end]]++;

            if (compare_.count(s[end]) && check[s[end]] == compare_[s[end]])
                window_count++;

            while (window_count == compare_.size()) {

                if (end - start + 1 < minLen) {
                    minLen = end - start + 1;
                    minStart = start;
                }

                check[s[start]]--;
                if (compare_.count(s[start]) && check[s[start]] < compare_[s[start]])
                    window_count--;

                start++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(minStart, minLen);
    }
};