class Solution {
public:
    string reverseVowels(string s) {

        vector<char> vovel;

        for (char chr : s) {
            if (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' ||
                chr == 'u' || chr == 'A' || chr == 'E' || chr == 'I' ||
                chr == 'O' || chr == 'U') {
                vovel.push_back(chr);
            }
        }
        reverse(vovel.begin(), vovel.end());

        int i =0;
        for (int j =0;j<s.length();j++) {
            char chr = s[j];
            if (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' ||
                chr == 'u' || chr == 'A' || chr == 'E' || chr == 'I' ||
                chr == 'O' || chr == 'U') {
                s[j] = vovel[i];
                i++;
            }
        }
        return s;
    }
};