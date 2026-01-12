class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int maxCapacity = *max_element(weights.begin(), weights.end());
        int totalWeight = accumulate(weights.begin(), weights.end(), 0);

        int left = maxCapacity;
        int right = totalWeight;
        int ans = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (isCapacityValid(mid, weights, days)) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }
    bool isCapacityValid(int capacity, vector<int>& weights, int days) {
        int sum = 0;
        int daysTaken = 0;
        for (int x : weights) {
            sum += x;
            if (sum > capacity) {
                daysTaken++;
                sum = 0;
                sum += x;
            }
        }
        daysTaken++;
        return daysTaken <= days ? true : false;
    }
};