class Solution {
public:

    void generate(vector<string> &result,int open,int close,string curr,int n){

        if(curr.length()==2*n){
            result.push_back(curr);
        }

        if(open<n){
            generate(result,open+1,close,curr+"(",n);
        }
        if(close<open){
            generate(result,open,close+1,curr+")",n);
        }

    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        generate(result,0,0,"",n);
        return result;
    }
};