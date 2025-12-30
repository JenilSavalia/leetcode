class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        if (flowerbed.size() == 0)
            return false;

        int i = 0;

        while (i < flowerbed.size() && n > 0) {
            int size = flowerbed.size();

            int left = (i == 0) ? 0 : flowerbed[i - 1];
            int right = (i == size - 1) ? 0 : flowerbed[i + 1];

            if (left == 0 && right == 0 && flowerbed[i] == 0) {
                flowerbed[i] = 1;
                n--;
                // if(n==0){return true;}
            }
            i++;
        }
        return n <= 0;
    }
};