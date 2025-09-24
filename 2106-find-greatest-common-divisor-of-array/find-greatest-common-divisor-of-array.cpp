class Solution {
public:
    int findGCD(vector<int>& nums) {

        int min = nums[0];
        int max = nums[0];

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > max) {
                max = nums[i];
            }
            if (nums[i] < min) {
                min = nums[i];
            }
        }
        cout << "max: " << max << " " << "min: " << " " << min;
         int GCD = 0;
         if(min == max) return min;
        for (int i = 1; i < max; i++) {
            if (min % i == 0 && max % i == 0) {
                if(i>GCD){
                GCD = i;
                }
            }
        }
        return GCD;
    }
};