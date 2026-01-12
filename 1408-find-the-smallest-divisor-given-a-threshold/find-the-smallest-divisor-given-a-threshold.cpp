class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxEle = *max_element(nums.begin(), nums.end());

        int left = 1;
        int right = maxEle;

        sort(nums.begin(), nums.end());

        // ceil to upper value is for a/b is => (a+b-1)/b

        while (left <= right) {
            int mid = left + (right - left) / 2;
            // check if sum is more then threshold or not

            if (getDivisorSum(nums, mid) > threshold) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return left;
    }
    long long getDivisorSum(vector<int>& nums, int divisor) {
        long long sum = 0;
        for (int x : nums) {
            sum += (x + divisor - 1) / divisor;
        }
        return sum;
    }
};