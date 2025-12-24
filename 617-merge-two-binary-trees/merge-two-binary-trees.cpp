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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if (root1 == NULL)
            return root2;
        if (root2 == NULL)
            return root1;

        // TreeNode* returnRoot = new TreeNode();
        // TreeNode* currTree = &returnRoot;

        queue<pair<TreeNode*, TreeNode*>> q;
        q.push({root1,root2});

        while (!q.empty()) {
            auto [ tmp1, tmp2 ] = q.front();
            q.pop();

            tmp1->val = tmp1->val + tmp2->val;

            if (tmp1->left && tmp2->left) {
                q.push({tmp1->left, tmp2->left});
            } else if (!tmp1->left) {
                tmp1->left = tmp2->left;
            }

            if (tmp1->right && tmp2->right) {
                q.push({tmp1->right , tmp2->right});
            } else if (!tmp1->right) {
                tmp1->right = tmp2->right;
            }
        }
        return root1;
    }
};