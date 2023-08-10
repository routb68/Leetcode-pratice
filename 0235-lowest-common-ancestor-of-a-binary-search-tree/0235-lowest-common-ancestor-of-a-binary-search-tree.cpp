/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    vector<vector<TreeNode*>>ans;
    void com(TreeNode* root,TreeNode* temp,vector<TreeNode*>v){
        if(root==NULL){
            return ;
        }
        if(root==temp){
            v.push_back(temp);
            ans.push_back(v);
            return ;
        }
        v.push_back(root);
        com(root->left,temp,v);
        com(root->right,temp,v);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>v;
        com(root,p,v);
        v.clear();
        com(root,q,v);
        int n = min(ans[0].size(),ans[1].size());
        for(int i=1;i<n;++i){
            if(ans[0][i]!=ans[1][i])
                return ans[0][i-1];
        }
        return ans [0][n-1];
    }
};