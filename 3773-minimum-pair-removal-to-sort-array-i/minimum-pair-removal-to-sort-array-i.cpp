class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        // vector<int> temp;
        int count = 0;
        while (!is_sorted(nums.begin(), nums.end())) {
            count++;
            nums = removeFirstMinPair(nums);
        }
        return count;
    }
    vector<int> removeFirstMinPair(vector<int>& nums) {

        int minSum = INT_MAX;
        int index1 = -1;
        int index2 = -1;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] + nums[i + 1] < minSum) {
                minSum = nums[i] + nums[i + 1];
                index1 = i;
                index2 = i + 1;
                // break;
            }
        }

        vector<int> newArr;
        if (index1 != -1) {

            for (int i = 0; i < nums.size(); i++) {
                if (i == index1) {
                    newArr.push_back(nums[index1] + nums[index2]);
                    continue;
                }
                if (i == index2) {
                    continue;
                } else {
                    newArr.push_back(nums[i]);
                }
            }
        }
        return newArr;
    }
};