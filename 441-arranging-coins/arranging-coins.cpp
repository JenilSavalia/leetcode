class Solution {
public:
    int arrangeCoins(int n) {
        int i = 1;
        int remain = n;
        while(remain >= i){
            remain -= i;
            i++;
        }
        return i-1;
    }
};