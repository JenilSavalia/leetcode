class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char,int> mpp;
        int start = 0;
        int end = 0; 
        int maxLen = 0; 
        while(end<s.length()){
            mpp[s[end]]++;

            while(end-start+1 != mpp.size()){

                mpp[s[start]]--;
                if(mpp[s[start]]==0){
                    mpp.erase(s[start]);
                }

                start++;
            }
            maxLen = max(maxLen,end-start+1);
            end++;
        }
        
        return maxLen;


    }
};