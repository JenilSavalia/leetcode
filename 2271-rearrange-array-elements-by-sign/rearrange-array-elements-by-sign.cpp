class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        // vector<int> pos;
        // vector<int> neg;
        // vector<int> returnArray;

        // for (int x : nums) {
        //     if (x < 0) {
        //         neg.push_back(x);
        //     } else {
        //         pos.push_back(x);
        //     }
        // }

        // for (int i = 0; i < nums.size()/2; i++){
        //     returnArray.push_back(pos[i]);
        //     returnArray.push_back(neg[i]);
        // }

        // return returnArray;

        int positiveIndex = 0;
        int negativeIndex = 1;
        int n = nums.size();
        vector<int> returnArray(n,0);

        for (int x : nums) {
            if (x < 0) {
                returnArray[negativeIndex] = x;
                negativeIndex += 2;
            } else {
                returnArray[positiveIndex] = x;
                positiveIndex += 2;
            }
        }

        return returnArray;
    }
};