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
    int amountOfTime(TreeNode* root, int start) {
        // undirected adjacency list
        // {
        //     1  : [5, 3]
        //     5  : [1, 4]
        //     3  : [1, 10, 6]
        //     4  : [5, 9, 2]
        //     9  : [4]
        //     2  : [4]
        //     10 : [3]
        //     6  : [3]
        // }

        vector<int> adj[500000];

        queue<TreeNode*> que;
        que.push(root);

        while (!que.empty()) {
            TreeNode* temp = que.front();
            que.pop();

            if (temp->left) {
                adj[temp->val].push_back(temp->left->val);
                adj[temp->left->val].push_back(temp->val);

                que.push(temp->left);
            }
            if (temp->right) {
                adj[temp->val].push_back(temp->right->val);
                adj[temp->right->val].push_back(temp->val);

                que.push(temp->right);
            }
        }

        vector<bool> visited(500000, false);
        queue<int> q;

        q.push(start);
        visited[start] = true;
        int count = -1;

        while (!q.empty()) {
            int size = q.size();
            count++;
            for (int i = 0; i < size; i++) {
                int u = q.front(); // u-v
                q.pop();
                for (int v : adj[u]) {
                    if (!visited[v]) {
                        visited[v] = true;
                        q.push(v);
                    }
                }
            }
        }
        return count;
    }
};