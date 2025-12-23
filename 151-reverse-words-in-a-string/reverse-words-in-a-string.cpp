#include <stack>
#include <string>

class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int i = 0;
        std::stack<std::string> stk;

        string tmp = "";
        while (i < n) {
            if (s[i] == ' ') {
                if (!tmp.empty()) {
                    cout << tmp << endl;
                    stk.push(tmp);
                    tmp = "";
                }

            } else {
                tmp += s[i];
            }
            i++;
        }
        if (!tmp.empty()) {
            stk.push(tmp);
        }

        tmp = "";

        while (!stk.empty()) {
            string curr = stk.top();
            stk.pop();
            tmp += curr;
            if (!stk.empty()) {
                tmp += " ";
            }
        }

        return tmp;
    }
};