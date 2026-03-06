class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char, int> compare;
        for (char x : p) {
            compare[x]++;
        }

        int start = 0;
        int end = 0;
        int k = p.length();
        unordered_map<char,int> check;
        vector<int> result;

        while (end < s.length()) {
            check[s[end]]++;

            if(end-start+1==k){
                if(compare == check){
                    result.push_back(start);
                }
                check[s[start]]--;
                if(check[s[start]]==0){
                    check.erase(s[start]);
                }
                start++;
            }
            end++;
        }
        return result;
    }
};