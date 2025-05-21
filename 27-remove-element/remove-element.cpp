class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int k = 0, i;

        // Finding K and making concurent element -1;
        for (i = 0; i < nums.size(); i++) {
            if (nums[i] == val) {
                k++;
                nums[i] = -1;
            }
        }

        // Sorting Array
        for (i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                int temp;
                if (nums[i] < nums[j]) {
                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }

        return nums.size()-k;
    }
};