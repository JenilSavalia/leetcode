class Solution {
public:
    void backtrack(string &digits,vector<string> &result,string &subset,int index,int limit,map<char,string> &mp) {

        if(subset.size() == limit){
            result.push_back(subset);
            return;
        }

        for (char x : mp[digits[index]]) {
            subset.push_back(x);
            backtrack(digits,result,subset,index+1,limit,mp);
            subset.pop_back();
        }

    }

    vector<string> letterCombinations(string digits) {

        map<char, string> mp;

        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";

        int index = 0;
        int limit = digits.length();
        string subset;
        vector<string> result;

        backtrack(digits,result,subset,index,limit,mp);

        return result;

    }
};