class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length())
            return false;

        map<char, char> s_to_t;
        map<char, char> t_to_s;

        for (int i = 0;i<s.length();i++) {
            char c1 = s[i];
            char c2 = t[i];

            // Check mapping s -> t
            if (s_to_t.count(c1)) {
                if (s_to_t[c1] != c2)
                    return false;
            } else {
                s_to_t[c1] = c2;
            }

            // Check mapping t -> s
            if (t_to_s.count(c2)) {
                if (t_to_s[c2] != c1)
                    return false;
            } else {
                t_to_s[c2] = c1;
            }
        }

        return true;
    }
};