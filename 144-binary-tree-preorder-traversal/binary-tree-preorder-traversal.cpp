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

// class Solution {
//     void preorder(TreeNode* root, vector<int>& result) {
//         if (root == NULL) {
//             return;
//         }
//         result.push_back(root->val);
//         preorder(root->left, result);
//         preorder(root->right, result);
//     }

// public:
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int> result;
//         preorder(root, result);
//         return result;
//     }
// };

class Solution {

public:
    vector<int> preorderTraversal(TreeNode* root) {

        if (root == NULL)
            return {};
        vector<int> result;
        stack<TreeNode*> treeStack;
        TreeNode* currNode;
        treeStack.push(root);

        while (treeStack.empty() == false) {
            currNode = treeStack.top();
            treeStack.pop();

            result.push_back(currNode->val);

            if (currNode->right != NULL)
                treeStack.push(currNode->right);

            if (currNode->left != NULL)
                treeStack.push(currNode->left);
        }
        return result;
    }
};