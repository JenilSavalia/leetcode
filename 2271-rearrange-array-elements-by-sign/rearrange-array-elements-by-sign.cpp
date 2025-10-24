class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        vector<int> pos;
        vector<int> neg;
        vector<int> returnArray;

        for (int x : nums) {
            if (x < 0) {
                neg.push_back(x);
            } else {
                pos.push_back(x);
            }
        }

        for (int i = 0; i < nums.size()/2; i++){
            returnArray.push_back(pos[i]);
            returnArray.push_back(neg[i]);
        }

        return returnArray;
    }
};