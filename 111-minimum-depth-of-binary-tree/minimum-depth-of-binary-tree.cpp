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
    void preOrder(TreeNode* root,int &minVal,int count){
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL){
            minVal = min(count,minVal);
            return;
        }

        preOrder(root->left,minVal,count+1);
        preOrder(root->right,minVal,count+1);
    }
public:
    int minDepth(TreeNode* root) {
        if(root == NULL) return NULL;
        int count = 1;
        int minVal = INT_MAX;
        preOrder(root,minVal,count);
        return minVal;
    }
};