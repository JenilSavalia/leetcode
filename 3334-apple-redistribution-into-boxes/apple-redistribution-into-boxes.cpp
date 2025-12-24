class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {

        int appleSum = 0;
        for (int apl : apple) {
            appleSum += apl;
        }

        sort(capacity.begin(), capacity.end(), [](int a, int b) {
            return a > b; // returns true if 'a' should come before 'b'
        });

        int minBox = 0;
        // for (int i = 0;i<capacity.size();i++){
        //     appleSum
        // }
        int i = 0;
        while(appleSum > 0 && i < capacity.size()){
            appleSum -= capacity[i];
            i++;
        }
        return i;
    }
};