class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int isSortedRotate = 0;

        for (int x = 0; x < n; x++) {
            vector<int> rotate;

            // Rotate array by x positions
            for (int i = 0; i < n; i++) {
                rotate.push_back(nums[(i + x) % n]);
            }

            // // Print the rotated array
            // cout << "Rotation " << x << ": ";
            // for (int i = 0; i < n; i++) {
            //     cout << rotate[i] << " ";
            // }

            // Check if sorted
            bool isSorted = true;
            for (int i = 0; i < n - 1; i++) {
                if (rotate[i] > rotate[i + 1]) {
                    isSorted = false;
                    break;
                }
            }

            if (isSorted) {
                isSortedRotate++;
                // cout << "✅ Sorted";
            } else {
                // cout << "❌ Not Sorted";
            }

            cout << endl;
        }
        if (isSortedRotate > 0) {
            return true;
        } else {
            return false;
        }
    }
};