class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> count1,count2;

        for (string x : words1) {
            count1[x]++;
        }

        for (string x : words2) {
            count2[x]++;
        }

        int count = 0;

        for(auto x : count1){
            if(x.second == 1 && count2[x.first] == 1){
                count++;
            }
        }
        return count;
    }
};