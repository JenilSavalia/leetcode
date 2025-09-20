#include <map>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        // BRUTE FORCE METHOD O(n**2)

        // bool containDuplicate = false;
        // for (int i = 0; i < nums.size(); i++) {
        //     for (int j = i+1; j < nums.size(); j++) {
        //         if (nums[i] == nums[j]) {
        //             containDuplicate = true;
        //             break;
        //         }
        //     }
        // }
        // return containDuplicate;

        map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }
        bool containDuplicate = false;


        for (auto x : m) {
            if (x.second > 1) {
                cout<< x.second;
                containDuplicate = true;
                break;
            }
        }

        return containDuplicate;
    }
};