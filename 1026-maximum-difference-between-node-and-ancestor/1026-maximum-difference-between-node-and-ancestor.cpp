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
    int ans;
    void dfs(TreeNode* root,int min1,int max1){
        min1=min(min1,root->val);
        max1=max(max1,root->val);
        ans=max(abs(max1-min1),ans);
        if(root->left)dfs(root->left,min1,max1);
        if(root->right)dfs(root->right,min1,max1);
    }
    int maxAncestorDiff(TreeNode* root) {
        ans=INT_MIN;
        dfs(root,root->val,root->val);
        return ans;
    }
};