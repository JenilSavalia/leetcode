#include <algorithm>

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if (arr.size() < 3)
            return false;

        int isStrictIncreasing = false;
        int isStrictDecreasing = false;


        int index = distance(arr.begin(),max_element(arr.begin(), arr.end()));

        // logic
        for (int i = 0; i < index; i++) {
            if ((arr[i] < arr[i + 1])) {
                isStrictIncreasing = true;
            }else{
                return false;
            }
        }

        // if (!isStrictIncreasing) {
        //     return false;
        // }


        for (int j = index; j < arr.size() - 1; j++) {
            if ((arr[j] > arr[j + 1])) {
                isStrictDecreasing = true;
            } else {
                return false;
            }
        }
        cout << isStrictIncreasing << isStrictDecreasing << endl;
        if (isStrictIncreasing && isStrictDecreasing) {
            return true;
        } else {
            return false;
        }
    }
};