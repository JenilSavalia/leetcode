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
    void getSum(TreeNode* root, long long& totalSum) {
        if (root == NULL)
            return;

        totalSum += root->val;
        getSum(root->left, totalSum);
        getSum(root->right, totalSum);
    }
    long long treverseTree(TreeNode* root, long long& maxProduct,
                           long long subTreeSum, long long totalSum) {
        if (root == NULL)
            return 0;

        long long left =
            treverseTree(root->left, maxProduct, subTreeSum, totalSum);
        long long right =
            treverseTree(root->right, maxProduct, subTreeSum, totalSum);

        subTreeSum += root->val + left + right;
        maxProduct = max(maxProduct, (totalSum - subTreeSum) * subTreeSum);
        return subTreeSum;
    }

public:
    int maxProduct(TreeNode* root) {
        long long maxProduct = INT_MIN;
        long long totalSum = 0;
        TreeNode* tempRoot = root;
        getSum(tempRoot, totalSum);

        // as per hint
        // max product would be (totalsum - subtree_sum) * subtree_sum
        long long subTreeSum = 0;
        treverseTree(root, maxProduct, subTreeSum, totalSum);
        const long long MOD = 1000000007;

        return static_cast<int>(maxProduct % MOD);
    }
};