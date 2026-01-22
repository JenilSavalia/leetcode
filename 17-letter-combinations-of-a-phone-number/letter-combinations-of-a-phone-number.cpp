class Solution {
public:
    vector<string> letterCombinations(string digits) {

        map<int, string> keypad;
        keypad[2] = "abc";
        keypad[3] = "def";
        keypad[4] = "ghi";
        keypad[5] = "jkl";
        keypad[6] = "mno";
        keypad[7] = "pqrs";
        keypad[8] = "tuv";
        keypad[9] = "wxyz";

        vector<string> result;
        string subset;

        generate(digits, result, subset, 0, digits.length(), keypad);

        return result;
    }

    void generate(string digits, vector<string>& result, string subset,
                  int index, int limit, map<int, string>& keypad) {

        if (subset.length() == limit) {
            result.push_back(subset);
            return;
        }

        for (char x : keypad[digits[index] - '0']) {

            subset.push_back(x);
            generate(digits, result, subset,index+1, limit, keypad);
            subset.pop_back();
        }
    }
};