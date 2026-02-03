class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int> freq;

        for (int x : arr) {
            freq[x]++;
        }

        for (int x : arr) {
            if (x == 0) {
                if (freq[0] > 1)
                    return true;
            } else {
                if (freq.count(2 * x))
                    return true;
            }
        }

        return false;
    }
};