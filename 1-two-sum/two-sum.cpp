class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> m;

        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (m.find(diff) != m.end()) {
                return {i, m[diff]};
            } else {
                m[nums[i]] = i;
            }
        }

        return {-1, -1};


        // WORKS ONLY IF SORTED
        // int left = 0;
        // int right = nums.size() - 1;

        // while (left < right) {
        //     int sum = nums[left] + nums[right];
        //     if (sum == target) {
        //         return {left, right}; // Found the pair
        //     } else if (sum > target) {
        //         right--;
        //     } else {
        //         left++;
        //     }
        // }
        // return {-1,-1};
    }
};