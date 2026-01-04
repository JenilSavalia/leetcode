class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int finalSum = 0;

        for (int num : nums) {
            int sum = 0;
            int count = 0;
            for (int i = 1; i * i <= num; i++) {
                if (num % i == 0) {
                    int d1 = i;
                    int d2 = num / i;

                    if (d1 == d2) { // perfect square
                        count += 1;
                        sum += d1;
                    } else { // distinct divisors
                        count += 2;
                        sum += d1 + d2;
                    }
                    if (count > 4)
                        break; // early exit
                }
            }
            if (count == 4) {
                finalSum += sum; // ✅ add to finalSum here
            }
        }
        return finalSum;
    }
};