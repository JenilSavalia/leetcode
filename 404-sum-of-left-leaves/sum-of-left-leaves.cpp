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
    // void preOrder(TreeNode* root, int& count) {
    //     if (root == NULL)
    //         return;

    //     preOrder(root->left, count);
    //     preOrder(root->right, count);
    //     if (root->left == NULL && root->right == NULL){
    //         cout << root->val << endl;
    //         count += root->val;
    //     }
    // }

public:
    int sumOfLeftLeaves(TreeNode* root) {
        int count = 0;
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode* tmp = q.front();
            q.pop();

            if(tmp->left  && tmp->left->right == NULL && tmp->left->left == NULL){
                count += tmp->left->val;
            }

            if (tmp->left) {
                q.push(tmp->left);
            }
            if (tmp->right) {
                q.push(tmp->right);
            }
        }

        return count;
    }
};