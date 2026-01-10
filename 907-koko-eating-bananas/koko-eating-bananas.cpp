class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // int k = 1;

        // int maxVal = *max_element(piles.begin(), piles.end());
        // int minK = maxVal;
        // while (k <= maxVal) {
        //     int takenHrs = 0;
        //     for (int i = 0; i < piles.size(); i++) {
        //         cout << (piles[i]+k-1)/k << endl;
        //         takenHrs += (piles[i]+k-1)/k;
        //         if (takenHrs > h) {
        //             break;
        //         }
        //     }
        //     cout << endl;
        //     if (takenHrs <= h) {
        //         minK = min(minK, k);
        //     }
        //     k++;
        // }
        // return minK;

        int maxVal = *max_element(piles.begin(), piles.end());
        int left = 1;
        int right = maxVal;
        int minK = maxVal;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            long long takenHrs = 0;
            for (int i = 0; i < piles.size(); i++) {
                // cout << (piles[i] + mid - 1) / mid << endl;
                takenHrs += (piles[i] + mid - 1) / mid;
                if (takenHrs > h) {
                    break;
                }
            }

            if (takenHrs <= h) {
                minK = min(minK, mid);
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return minK;
    }
};