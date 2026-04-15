class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        // vector<int> temp;
        // for (int i = 0; i < m; i++) {
        //     temp.push_back(nums1[i]);
        // }

        // cout << temp.size();

        // int left = 0;
        // int right = 0;

        // int index = 0;

        // while (left < temp.size() && right < nums2.size()) {

        //     if (temp[left] < nums2[right]) {
        //         nums1[index] = temp[left];
        //         left++;
        //         index++;
        //     } else {
        //         nums1[index] = nums2[right];
        //         right++;
        //         index++;
        //     }
        // }

        // while (left < temp.size()) {
        //     nums1[index] = temp[left];
        //     left++;
        //     index++;
        // }
        // while (right < nums2.size()) {
        //     nums1[index] = nums2[right];
        //     right++;
        //     index++;
        // }

        int ptr1 = m - 1;
        int ptr2 = n - 1;
        int index = m + n - 1;

        if (m == 0)
            nums1 = nums2;

        while (ptr1 >= 0 && ptr2 >= 0) {

            if (nums1[ptr1] > nums2[ptr2]) {
                nums1[index] = nums1[ptr1];
                ptr1--;
                index--;
            } else {
                nums1[index] = nums2[ptr2];
                ptr2--;
                index--;
            }
        }

        while (ptr2 >= 0) {
            nums1[index] = nums2[ptr2];
            ptr2--;
            index--;
        }
    }
};