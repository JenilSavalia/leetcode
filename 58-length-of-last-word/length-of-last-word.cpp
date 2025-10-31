class Solution {
public:
    int lengthOfLastWord(string s) {
        int endSpace;
        int n = s.length();
        for(int i = n-1 ;i>=0;i--){
            if(s[i]!=' '){
                endSpace = i;
                cout << i;
                break;
            }
        }
        int cnt = 0;
        for(int i = endSpace;i>=0;i--){
            if(s[i]==' '){
                break;
            }else{
                cnt++;
            }
        }
        return cnt;
    }
};