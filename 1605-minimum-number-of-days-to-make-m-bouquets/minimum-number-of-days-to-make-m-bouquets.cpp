class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if (bloomDay.size() < (long long)m * k) {
            return -1;
        }

        // range of days can be : min -> 1 to max -> maxday to bloom
        int maxDay = *max_element(bloomDay.begin(), bloomDay.end());

        // trying brute force
        // for (int d = 1; d <= maxDay; d++) {
        //     int count = countBouquets(d, bloomDay, k);

        //     if (count >= m) {
        //         return d;
        //     }
        // }
        // return -1;

        // binary search

        // intution behind binary search
        // if bouqets made is more then m , then we go left

        int left = 1;
        int right = maxDay;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            int count = countBouquets(mid, bloomDay, k);

            if(count >= m){
                right = mid-1;
            }else{
                left = mid+1;
            }
        }
        return left;
    }
    // count how many bockuts can be made on x day
    int countBouquets(int day, vector<int>& bloomDay, int k) {

        int flowers = 0;
        int bouquets = 0;

        for (int i = 0; i < bloomDay.size(); i++) {

            if (bloomDay[i] <= day) {
                flowers++;
                if (flowers == k) {
                    bouquets++;
                    flowers = 0; // reset after making one bouquet
                }
            } else {
                flowers = 0; // break adjacency
            }
        }
        return bouquets;
    }
};