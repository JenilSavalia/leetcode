class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // map<int, int> m;
        // for (int y : nums) {
        //     m[y]++;
        // }
        // int retValue;
        // for (auto x : m) {
        //     if (x.second == 1) {
        //         retValue = x.first;
        //         break;
        //     }
        // }
        // return retValue;


// Approach 2 : XOR based
// Two important properties of XOR are the following:

// XOR of two same numbers is always 0 i.e. a ^ a = 0. ←Property 1.
// XOR of a number with 0 will result in the number itself i.e. 0 ^ a = a.  ←Property 2



    int n = nums.size();

    // XOR all the elements:
    int xorr = 0;
    for (int i = 0; i < n; i++) {
        xorr = xorr ^ nums[i];
    }
    return xorr;



    }
    
};