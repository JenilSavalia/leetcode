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
    void preorder(TreeNode* root, int count, int& maxCount) {
        if (root == NULL)
            return ;

        if (root->left == NULL && root->right == NULL) {
            maxCount = max(count, maxCount);
            return;
        }
        // count++;
        preorder(root->left, count + 1, maxCount);
        preorder(root->right, count + 1, maxCount);
    }

public:
    int maxDepth(TreeNode* root) {
        if (root == NULL)
            return 0;
        int count = 1;
        int maxCount = 0;
        preorder(root, count, maxCount);
        return maxCount;
    }
};