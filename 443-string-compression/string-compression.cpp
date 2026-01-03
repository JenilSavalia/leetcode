class Solution {
public:
    int compress(vector<char>& chars) {
        string s = "";

        int i = 0;
        int j = 0;

        while (j < chars.size()) {
            if (j + 1 < chars.size() && chars[j + 1] == chars[i]) {
               j++;
               continue;
            }

            s += chars[i];
            int length = j-i+1;

            if(length > 1){
                string cnt = to_string(length);
                for(char ch : cnt){
                    s += ch;
                }
            }
            j++;
            i = j;

        }

        for (int i = 0; i < s.length(); i++) {
            chars[i] = s[i];
        }

        return s.length();
    }
};