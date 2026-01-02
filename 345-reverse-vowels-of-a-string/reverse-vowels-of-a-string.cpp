class Solution {
public:
    string reverseVowels(string s) {

        // vector<char> vovel;

        // for (char chr : s) {
        //     if (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' ||
        //         chr == 'u' || chr == 'A' || chr == 'E' || chr == 'I' ||
        //         chr == 'O' || chr == 'U') {
        //         vovel.push_back(chr);
        //     }
        // }
        // reverse(vovel.begin(), vovel.end());

        // int i =0;
        // for (int j =0;j<s.length();j++) {
        //     char chr = s[j];
        //     if (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' ||
        //         chr == 'u' || chr == 'A' || chr == 'E' || chr == 'I' ||
        //         chr == 'O' || chr == 'U') {
        //         s[j] = vovel[i];
        //         i++;
        //     }
        // }
        // return s;

        int i = 0;
        int j = s.length() - 1;

        while (i < j) {
            char chr = s[i];
            char chr1 = s[j];
            if ((chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' ||
                 chr == 'u' || chr == 'A' || chr == 'E' || chr == 'I' ||
                 chr == 'O' || chr == 'U') &&
                (chr1 == 'a' || chr1 == 'e' || chr1 == 'i' || chr1 == 'o' ||
                 chr1 == 'u' || chr1 == 'A' || chr1 == 'E' || chr1 == 'I' ||
                 chr1 == 'O' || chr1 == 'U')) {
                s[i] = chr1;
                s[j] = chr;
                i++;
                j--;
            }
            else if ((chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' ||
                 chr == 'u' || chr == 'A' || chr == 'E' || chr == 'I' ||
                 chr == 'O' || chr == 'U') &&
                !(chr1 == 'a' || chr1 == 'e' || chr1 == 'i' || chr1 == 'o' ||
                  chr1 == 'u' || chr1 == 'A' || chr1 == 'E' || chr1 == 'I' ||
                  chr1 == 'O' || chr1 == 'U')) {
                j--;
            } else {
                i++;
            }
        }
        return s;
    }
};