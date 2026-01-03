class Solution {
public:
    void encode(string& s) {
        int i = 0;
        int j = 0;
        string temp = "";

        while (j < s.size()) {

            while (j < s.size() - 1 && s[j + 1] == s[i]) {
                j++;
                continue;
            }
            string length = to_string(j - i + 1);

            temp += length;
            temp += s[i];

            j++;
            i = j;
        }
        s = temp;
        cout << s << endl;
    }
    string countAndSay(int n) {
        int i = 1;
        string s = "1";
        while (i < n) {
            encode(s);
            i++;
        }

        return s;
    }
};