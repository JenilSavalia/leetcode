class Solution {
public:
    bool checkDivisibility(int n) {

        int sum = 0;
        long long product = 1;

        int tempNum = n;
        while (tempNum > 0) {
            sum += tempNum % 10;
            product *= tempNum % 10;
            tempNum /= 10;
        }

        return n % (sum + product) == 0;
    }
};