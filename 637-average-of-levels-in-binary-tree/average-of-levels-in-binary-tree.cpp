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
    vector<double> averageOfLevels(TreeNode* root) {

        queue<TreeNode*> q;
        vector<double> levelAvg;
        q.push(root);

        while (!q.empty()) {
            int currSize = q.size();
            long long levelSum = 0;
            for (int i = 0; i < currSize; i++) {

                TreeNode* tmp = q.front();
                q.pop();
                levelSum += tmp->val;

                if(tmp->left){
                    q.push(tmp->left);
                }
                if(tmp->right){
                    q.push(tmp->right);
                }

            }
            levelAvg.push_back((double)levelSum / currSize);
        }
        return levelAvg;
    }
};