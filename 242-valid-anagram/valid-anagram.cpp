class Solution {
public:
    bool isAnagram(string s, string t) {

        map<char, int> ss;

        bool isAnagram = true;

        for (int i = 0; i < s.length(); i++) {
            ss[s[i]]++;
        }

        for (int i = 0; i < t.length(); i++) {
            ss[t[i]]--;
        }

        for (auto x : ss) {
            cout << x.first << " " << x.second << endl;
            if (!x.second <= 0) {
                isAnagram = false;
                break;
            }
        }

        return isAnagram;
    }
};