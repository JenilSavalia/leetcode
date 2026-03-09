class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
        unordered_map<int,int> stt;
        int start = 0;
        int end = 0;
        int maxFruits = 0;

        while(end < fruits.size()){
            stt[fruits[end]]++;

            while(stt.size() > 2 && start<=end){
                stt[fruits[start]]--;
                if(stt[fruits[start]]==0){
                    stt.erase(fruits[start]);
                }
                start++;
            }

            maxFruits = max(maxFruits,end-start+1);
            end++;
        }
        return maxFruits;
    }
};