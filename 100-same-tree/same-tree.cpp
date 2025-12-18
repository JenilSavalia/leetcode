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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*> q1;
        queue<TreeNode*> q2;
        q2.push(q);
        q1.push(p);

        while (!q1.empty() && !q2.empty()) {
            TreeNode* tmp1 = q1.front();
            TreeNode* tmp2 = q2.front();
            q1.pop();
            q2.pop();

            // if both of the nodes is null , then skip this iteration....
            if (!tmp1 && !tmp2)
                continue;

            // check if any one of the node is null , return false as this means structure of 
            if (!tmp1 || !tmp2)
                return false;

            // check value 
            if (tmp1->val != tmp2->val) {
                return false;
            }

            q1.push(tmp1->left);
            q1.push(tmp1->right);
            q2.push(tmp2->left);
            q2.push(tmp2->right);
        }

        return true;
    }
};