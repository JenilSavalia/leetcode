class Solution {
public:
    string longestPalindrome(string s) {

        string temp;
        int n = s.length();
        string longestPol = s.substr(0, 1);

        for (int i = 0; i < n; i++) {
            temp = s[i];
            for (int j = i + 1; j < n; j++) {
                temp += s[j];
                int l = 0;
                int m = temp.length() - 1;
                bool isPol = true;
                while (l < m) {
                    if (temp[l] != temp[m]) {
                        isPol = false;
                        break;
                    }

                    l++;
                    m--;
                }
                if(isPol && temp.length() > longestPol.length()){
                    longestPol = temp;;
                }
            }
        }
        return longestPol;
    }
};