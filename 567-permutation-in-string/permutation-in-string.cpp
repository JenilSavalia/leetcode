class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> compare;
        for (int x : s1) {
            compare[x]++;
        }

        int start = 0;
        int end = 0;
        int k = s1.length();
        unordered_map<char,int> check;
        bool result = false;

        while(end<s2.length()){
            check[s2[end]]++;

            if(end-start+1==k){
                if(compare==check){
                    result = true;
                    return true;
                }
                check[s2[start]]--;
                if(check[s2[start]]==0){
                    check.erase(s2[start]);
                }
                start++;
            }
            end++;

        }
    
        return result;

    }
};