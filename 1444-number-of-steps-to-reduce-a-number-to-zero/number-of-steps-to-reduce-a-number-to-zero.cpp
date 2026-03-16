class Solution {
public:
    int steps(int num) {

        if (num == 0) {
            return 0;
        }

        if(num%2==0){
            return 1 + steps(num / 2);
        }else{
            return  1 + steps(num-1);
        }
    //    return num % 2 == 0 ? 1 + steps(num % 2) : 1 + steps(num-1);
    }
    int numberOfSteps(int num) {
        return steps(num);
    }
};