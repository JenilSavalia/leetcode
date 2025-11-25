class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length() != t.length())
            return false;

        unordered_map<char, int> m1;
        unordered_map<char, int> m2;

        for (char x : s) {
            m1[x]++;
        }
        for (char x : t) {
            m2[x]++;
        }

        return m1 == m2;
    }
};