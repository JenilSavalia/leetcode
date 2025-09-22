class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for (int i = 0; i < details.size(); i++) {
            string temp = details[i];
            
            // cout << ((temp[temp.length()-4])-48)*10 + ((temp[temp.length()-3])-48)<<endl;

            if (((temp[temp.length()-4])-48)*10 + ((temp[temp.length()-3])-48)>60) {
                count++;
            }
        }
        return count;
    }
};