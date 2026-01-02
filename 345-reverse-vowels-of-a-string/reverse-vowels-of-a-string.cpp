class Solution {
public:
    bool isVovel(char chr) {
        return chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' ||
               chr == 'u' || chr == 'A' || chr == 'E' || chr == 'I' ||
               chr == 'O' || chr == 'U';
    }
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
            if (isVovel(s[i]) && isVovel(s[j]) ) {
                swap(s[i],s[j]);
                i++;
                j--;
            } else if (isVovel(s[i]) && !isVovel(s[j]) ) {
                j--;
            } else {
                i++;
            }
        }
        return s;
    }
};