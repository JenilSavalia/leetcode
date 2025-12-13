class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();


        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {

            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int curr = nums[i];
            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                int twoSum = nums[j] + nums[k];
                if (twoSum == -(curr)) {

                    while (j < k && nums[j] == nums[j + 1])
                        j++;
                    while (k > j && nums[k] == nums[k - 1])
                        k--;
                    result.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    continue;
                } else if (twoSum > -(curr)) {
                    k--;
                } else {
                    j++;
                }
            }
        }

        // [-1,0,1,2,-1,-4]
        // -4 , -1 , -1 , 0 ,1 , 2

        //[2,-3,0,-2,-5,-5,-4,1,2,-2,2,0,2,-4,5,5,-10]
        // -10, -5, -5, -4, -4, -3, -2, -2, 0, 0, 1, 2, 2, 2, 2, 5, 5

        return result;
    }
};