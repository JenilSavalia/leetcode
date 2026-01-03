class Solution {
public:
    string compressedString(string word) {
        int i = 0;
        int j = 0;
        string comp = "";
        while (j < word.size()) {

            while (j < word.size() - 1 && word[j + 1] == word[i]) {
                j++;
                continue;
            }

            int length = j - i + 1;
            if (length > 9) {
                int totalFull = length / 9;
                int leftOut = length % 9;
                int k = 0;
                while (k < totalFull) {
                    comp += '9';
                    comp += word[i];
                    k++;
                }
                if (leftOut > 0) {
                    comp += to_string(leftOut);
                    comp += word[i];
                }

            } else {
                comp += to_string(length);
                comp += word[i];
            }

            j++;
            i = j;
        }
        return comp;
    }
};