class Solution {
public:
    int percentageLetter(string s, char letter) {
        int size = s.length();
        int count = 0;
        for (char c : s) {
            if (c == letter) {
                count++;
            }
        }

        return (count*100 / size);
    }
};