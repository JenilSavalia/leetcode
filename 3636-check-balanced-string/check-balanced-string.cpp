class Solution {
public:
    bool isBalanced(string num) {
        int sumOdd = 0;
        int sumEven = 0;

        for(int i=0;i<num.length();i++){
            int nums = num[i] - '0' ;
            if(i%2==0){
                sumEven += nums;
            }else{
                sumOdd += nums;
            }
        }
        return sumEven == sumOdd;
    }
};