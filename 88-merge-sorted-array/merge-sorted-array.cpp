class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        vector<int> temp;
        for (int i = 0; i < m; i++) {
            temp.push_back(nums1[i]);
        }

        cout << temp.size();

        int left = 0;
        int right = 0;

        int index = 0;

        while (left < temp.size() && right < nums2.size()) {

            if (temp[left] < nums2[right]) {
                nums1[index] = temp[left];
                left++;
                index++;
            } else {
                nums1[index] = nums2[right];
                right++;
                index++;
            }
        }

        while (left < temp.size()) {
            nums1[index] = temp[left];
            left++;
            index++;
        }
        while (right < nums2.size()) {
            nums1[index] = nums2[right];
            right++;
            index++;
        }
    }
};