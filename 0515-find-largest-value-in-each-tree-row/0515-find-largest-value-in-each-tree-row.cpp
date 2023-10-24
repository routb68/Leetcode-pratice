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
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int>ans,res ;
        if(root==NULL) return ans;
        int pre = -1;
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        while(q.size()>1){
            TreeNode *temp= q.front();q.pop();
            if(temp==NULL){
                ans.push_back(*max_element(begin(res),end(res)));
                res.clear();
                q.push(NULL);
                continue;
            }
            res.push_back(temp->val);
            if(temp->left!=NULL)q.push(temp->left);
            if(temp->right!=NULL)q.push(temp->right);
        }
        ans.push_back(*max_element(begin(res),end(res)));
        return ans ;
    }
};