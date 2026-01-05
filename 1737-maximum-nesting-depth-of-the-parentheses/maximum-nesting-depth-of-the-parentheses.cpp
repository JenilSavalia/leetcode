class Solution {
public:
    int maxDepth(string s) {

        int maxDepth = 0;
        int currCount = 0;

        for(char x : s){
            if(x == '('){
                currCount++;
            }else if(x == ')'){
                maxDepth = max(currCount,maxDepth);
                currCount--;
            }
        }
        return maxDepth;

    }
};