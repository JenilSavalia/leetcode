class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {


        int carry = 1;

        vector<int> rtrn;

        for (int i = digits.size() - 1; i >= 0; i--) {   
            int sum = digits[i] + carry;
            rtrn.push_back(sum % 10);
            carry = sum / 10;
        }

        if (carry > 0) {
            rtrn.push_back(carry); 
        }

        reverse(rtrn.begin(),rtrn.end());
        return rtrn;
    }
};