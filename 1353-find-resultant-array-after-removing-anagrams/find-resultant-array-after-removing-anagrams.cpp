class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        // range will br from 1 to words.length - 1
        int i = 1;
        while (i < words.size() ) {
            string val = words[i];
            string pre = words[i - 1];
            sort(val.begin(), val.end());
            sort(pre.begin(), pre.end());
            if (val == pre) {
                words.erase(words.begin() + i);
            }else{
                i++;
            }
        }
        // for (int i = 1; i < words.size(); i++) {
        //     string val = words[i];
        //     string pre = words[i-1];
        //     sort(val.begin(),val.end());
        //     sort(pre.begin(),pre.end());
        //     if(val==pre){
        //         words.erase(words.begin()+i);
        //     }
        // }
        return words;
    }
};