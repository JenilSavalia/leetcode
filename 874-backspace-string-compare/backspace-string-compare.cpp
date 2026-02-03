class Solution {
public:
    bool backspaceCompare(string s, string t) {

        string temp_s;
        for (char x : s) {
            if (x == '#') {
                if (!temp_s.empty()) {
                    temp_s.pop_back();
                }

            } else {
                temp_s.push_back(x);
            }
        }
        string temp_t;
        for (char x : t) {
            if (x == '#') {
                if (!temp_t.empty()) {
                    temp_t.pop_back();
                }
            } else {
                temp_t.push_back(x);
            }
        }

        return temp_s == temp_t;
    }
};