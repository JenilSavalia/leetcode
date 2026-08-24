class Solution {
public:
    bool sumGame(string num) {
        int s_left=0, s_right=0, q_left=0, q_right=0;

        int i = 0;
        for (char x : num) {
            i++;
            if (i <= num.size() / 2) {

                if (x == '?') {
                    q_left++;
                } else {
                    s_left += (int(x) - '0');
                }

            } else {
                if (x == '?') {
                    q_right++;
                } else {
                    s_right += (int(x) - '0');
                }
            }
        }

        if ((q_left + q_right) % 2 != 0)
            return true;
        // alice wins

        if (2 * (s_left - s_right) + 9 * (q_left - q_right) == 0) {
            return false;
            // bob wins
        }

        return true;
        // alice wins
    }
};