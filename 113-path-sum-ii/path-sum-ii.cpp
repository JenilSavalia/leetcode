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
    void preOrder(TreeNode* root,int target,vector<int> targetPath,vector<vector<int>> &finalReturn,int curr){
        if(root == NULL) return;

        curr += root->val;
        // cout << curr << endl;
        targetPath.push_back(root->val);
        if((root->left == NULL && root->right == NULL) && curr == target){
            finalReturn.push_back(targetPath);
        }
        // if(curr == target){
        // }

        preOrder(root->left,target,targetPath,finalReturn,curr);
        preOrder(root->right,target,targetPath,finalReturn,curr);
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<int> targetPath;
        vector<vector<int>> finalReturn;
        int curr = 0;
        preOrder(root,targetSum,targetPath,finalReturn,curr);

        return finalReturn;
    }
};