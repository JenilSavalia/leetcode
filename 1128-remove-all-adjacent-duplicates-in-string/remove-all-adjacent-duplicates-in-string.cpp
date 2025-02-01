class Solution {
public:
    string removeDuplicates(string s) {

        string temp = "";

        for (int i = 0; i < s.length(); i++) {

            if (!temp.empty() && temp.back() == s[i]) {
                temp.pop_back();
            } else {
                temp.push_back(s[i]);
            }
        }

        return temp;
    }
};