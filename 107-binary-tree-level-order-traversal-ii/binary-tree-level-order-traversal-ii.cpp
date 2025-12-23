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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if (root == NULL)
            return {};

        vector<vector<int>> level;

        queue<TreeNode*> que;
        // level.push_back({root->val});
        que.push(root);

        while (!que.empty()) {
            int size = que.size();
            vector<int> tempLevel;
            for (int i = 0; i < size; i++) {
                TreeNode* tmp = que.front();
                tempLevel.push_back(tmp->val);
                que.pop();

                if (tmp->left) {
                    que.push(tmp->left);
                }
                if(tmp->right){
                    que.push(tmp->right);
                }
            }
            level.push_back(tempLevel);
        }
        reverse(level.begin(),level.end());
        return level;
    }
};