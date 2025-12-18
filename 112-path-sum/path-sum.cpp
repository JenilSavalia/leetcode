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
    bool preOrder(TreeNode* root, int count, int target) {
        if (root == NULL)
            return false;

        if (root->left == NULL && root->right == NULL) {
            if (count + root->val == target) {
                return true;
            }
        }

        cout << root->val << endl;
        return preOrder(root->left, count + root->val, target) ||
               preOrder(root->right, count + root->val, target);
    }

public:
    bool hasPathSum(TreeNode* root, int targetSum) {

        int count = 0;
        return preOrder(root, count, targetSum);
    }
};