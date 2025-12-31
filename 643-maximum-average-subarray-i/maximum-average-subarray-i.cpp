class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int size = nums.size();

        int i = 0;
        int j = 0;
        long long sum = 0;

        double maxAvg = INT_MIN;

        while (j < size) {
            sum += nums[j];
            if (j - i + 1 == k) {
                cout << sum << endl;
                double avg = (double)sum / k;
                maxAvg = max(maxAvg,avg);
                sum -= nums[i];
                i++;
            }
            j++;
        }
        return maxAvg;
    }
};