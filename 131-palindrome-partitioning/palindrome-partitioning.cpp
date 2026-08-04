class Solution {
public:
    void generate(int index, vector<vector<string>>& result, vector<string> curr, string& s) {

        if (index == s.length()) {
            result.push_back(curr);
            return;
        }

        for (int i = index; i < s.length(); i++) {

            if (isPalindrome(s, index, i)) {
                curr.push_back(s.substr(index, i - index + 1));
                generate(i + 1, result, curr, s);
                curr.pop_back();
            }
        }
    }

    bool isPalindrome(string s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

    vector<vector<string>> partition(string s) {
        
        vector<vector<string>> result;
        vector<string> curr;

        generate(0,result,curr,s);

        return result;

    }
};