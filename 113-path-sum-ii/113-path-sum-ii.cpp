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
    vector<vector<int>> res;
    void dfs(TreeNode* root,int k,vector<int>ans){
        if(root==NULL ) return ;
        ans.push_back(root->val);
        k-=root->val;
        if(root->left==NULL and root->right==NULL){
            if(k==0){
                res.push_back(ans);
            }
            return;
        }
        dfs(root->left,k,ans);
        dfs(root->right,k,ans);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        res.clear();
        vector<int>ans;
        dfs(root,targetSum,ans);
        return res;
    }
};