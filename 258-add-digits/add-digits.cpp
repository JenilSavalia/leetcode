class Solution {
public:
    int addDigits(int num) {

        int count = 0;
        while (num != 0) {
            count += num % 10;
            num = num / 10;
        }

        while (count > 9) {
            int temp = 0;
            while (count != 0) {
                temp += count % 10;
                count = count / 10;
            }
            count = temp;
        }

        return count;
    }
};