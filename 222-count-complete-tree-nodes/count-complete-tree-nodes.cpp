class Solution {
public:
    int countLeft(TreeNode* root) {
        int height = 0;
        while (root) {
            height++;
            root = root->left;
        }
        return height;
    }

    int countRight(TreeNode* root) {
        int height = 0;
        while (root) {
            height++;
            root = root->right;
        }
        return height;
    }

    int countNodes(TreeNode* root) {
        if (!root) return 0;

        int left = countLeft(root);
        int right = countRight(root);

        if (left == right) {
            // Perfect binary tree
            return (1 << left) - 1;
        }

        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};
