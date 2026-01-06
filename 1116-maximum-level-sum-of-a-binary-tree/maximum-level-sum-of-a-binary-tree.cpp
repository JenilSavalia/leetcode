/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int level = 0;
        int maxLevel = 0;
        int maxSum = INT_MIN;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            int sum = 0;
            level++;
            for(int i=0;i<size;i++){
                TreeNode* tmp = q.front();
                q.pop();
                sum += tmp->val;
                if(tmp->left){
                    q.push(tmp->left);
                }
                if(tmp->right){
                    q.push(tmp->right);
                }
            }
            
            if(sum > maxSum){
                cout << sum << " " << level << endl;
                maxSum = sum;
                maxLevel = level;
            }
            
        }
        return maxLevel;
    }
};