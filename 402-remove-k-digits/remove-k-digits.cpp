class Solution {
public:
    string removeKdigits(string num, int k) {

        if (num.length() == 0)
            return "0";
        if (num.length() == 1 && k > 0)
            return "0";

        string result = "";

        // we need to remove element which has number smaller to its next
        int i = 0;
        while (i < num.length() && k > 0) {
            if (num[i] > num[i + 1]) {
                k--;
                num.erase(i, 1);
                if (i > 0)
                    i--; // step back to recheck previous digit

            } else {
                i++;
            }
        }

        // If k still remains, remove from end
        while (k > 0) {
            num.pop_back();
            k--;
        }

        i = 0;
        while (i < num.length()) {
            if (num[i] == '0') {
                i++;
            } else {
                break;
            }
        }
        for (i; i < num.length(); i++) {
            result += num[i];
        }

        if (result == "")
            return "0";
        return result;
    }
};