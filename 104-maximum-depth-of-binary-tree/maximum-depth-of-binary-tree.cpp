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
    void perOrder(TreeNode* root, int count, int &maxCount) {
        if (root == NULL) {
            maxCount = max(count, maxCount);
            return;
        }

        // add count
        count++;
        perOrder(root->left, count, maxCount);
        perOrder(root->right, count, maxCount);
    }

public:
    int maxDepth(TreeNode* root) {
        int maxCount = INT_MIN;
        int count = 0;

        perOrder(root,count,maxCount);

        return maxCount;
    }
};