/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == NULL) return {};

        int level = 1;
        vector<vector<int>> zigzagReturn;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int size = q.size();
            vector<int> zigzagLevel;
            for(int i = 0;i<size;i++){
                TreeNode* tmp = q.front();
                q.pop();
                zigzagLevel.push_back(tmp->val);

                if(tmp->left){
                    q.push(tmp->left);
                }
                if(tmp->right){
                    q.push(tmp->right);
                }

            }
            if(level % 2 == 0){
                reverse(zigzagLevel.begin(),zigzagLevel.end());
            }
            zigzagReturn.push_back(zigzagLevel);
            level++;
        }
        return zigzagReturn;
    }
};