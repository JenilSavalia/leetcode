/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {

        if(!root) return {};

        vector<vector<int>> result;
        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            vector<int> current_level;
            for (int i = 0; i < size; i++) {

                Node* node = q.front();
                q.pop();

                current_level.push_back(node->val);
                for (Node* child : node->children) {
                    q.push(child);
                }
            }
            result.push_back(current_level);
        }
        return result;
    }
};