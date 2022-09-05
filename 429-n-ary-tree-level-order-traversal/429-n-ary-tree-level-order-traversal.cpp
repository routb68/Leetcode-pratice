class Solution { // 20 ms, faster than 86.78%
public:
    vector<vector<int>> levelOrder(Node* root) {
        if (root == nullptr) return {};
        queue<Node*> q;
        q.push(root);
        vector<vector<int>> ans;
        while (!q.empty()) {
            vector<int>v;
            for (int i = q.size(); i >= 1; i--) {
                Node* curr = q.front(); q.pop();
                v.push_back(curr->val);
                for (Node* child : curr->children) {
                    q.push(child);
                }
            }
            ans.emplace_back(v);
        }
        return ans;
    }
};