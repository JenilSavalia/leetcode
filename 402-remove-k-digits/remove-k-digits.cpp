class Solution {
public:
    string removeKdigits(string num, int k) {

        // if (num.length() == 0)
        //     return "0";
        // if (num.length() == 1 && k > 0)
        //     return "0";

        // string result = "";

        // // we need to remove element which has number smaller to its next
        // int i = 0;
        // while (i < num.length() && k > 0) {
        //     if (num[i] > num[i + 1]) {
        //         k--;
        //         num.erase(i, 1);
        //         if (i > 0)
        //             i--; // step back to recheck previous digit

        //     } else {
        //         i++;
        //     }
        // }

        // // If k still remains, remove from end
        // while (k > 0) {
        //     num.pop_back();
        //     k--;
        // }

        // i = 0;
        // while (i < num.length()) {
        //     if (num[i] == '0') {
        //         i++;
        //     } else {
        //         break;
        //     }
        // }
        // for (i; i < num.length(); i++) {
        //     result += num[i];
        // }

        // if (result == "")
        //     return "0";
        // return result;

        // stack approach

        stack<int> stk;

        for (char x : num) {

            while (!stk.empty() && stk.top() > x && k > 0) {
                k--;
                stk.pop();
            }
            stk.push(x);
        }

        // // If k still remains, remove from end
        while (k > 0) {
            stk.pop();
            k--;
        }

        string result = "";

        while (!stk.empty()) {
            result += stk.top();
            stk.pop();
        }
        reverse(result.begin(), result.end());
        int i = 0;
        while (i < result.length() && result[i] == '0') {
            i++;
        }
        result = result.substr(i);

        return result.empty() ? "0" : result;
    }
};