class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> stk;
        int j = 0;  // pointer for popped
        
        for (int i = 0; i < pushed.size(); i++) {
            stk.push(pushed[i]);
            
            // Pop while top matches popped[j]
            while (!stk.empty() && stk.top() == popped[j]) {
                stk.pop();
                j++;
            }
        }
        
        return stk.empty();
    }
};