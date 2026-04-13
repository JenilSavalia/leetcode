class Solution {
public:
    bool isPalindrome(string s) {
        string check = "";

        for(char x : s){
            if((int(x) >=48 && int(x)<= 57) || (int(x) >=65 && int(x)<= 90) || (int(x) >=97 && int(x)<= 122)){
                check+=x;
            }
        }
        std::transform(check.begin(), check.end(), check.begin(), 
                   [](unsigned char c){ return std::tolower(c); });

        int left = 0;
        int right = check.length()-1;

        while(left<right){
            if(check[left] != check[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};