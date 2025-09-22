class Solution {
public:
    bool isSubsequence(string s, string t) {
        int pointer1 = 0, pointer2 = 0;

        while (pointer1 <= s.size() && pointer2 <= t.size()) {
            if (s[pointer1]==t[pointer2]){
                pointer1++;
            }
            pointer2++;
        }
        cout << pointer1;
        if(pointer1 > s.size() ){
            return true;
        }else{
            return false;
        }
        // return 1;
    }
};