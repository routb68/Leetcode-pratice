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
    int maxPathSum(TreeNode* root) {
        ans=INT_MIN;
        dfs(root);
        return ans;
    }
    int dfs (TreeNode* root){
        if(root==NULL) return 0;
        if(root->left==NULL and root->right==NULL){
            ans=max(ans,root->val);
            return root->val;
        }
        int maxvalatroot=INT_MIN;
        int leftval=dfs(root->left);
        int rightval=dfs(root->right);
        maxvalatroot=max({root->val,root->val+leftval,root->val+rightval,
                          root->val+leftval+rightval});
        ans=max(ans,maxvalatroot);
        return max({root->val,root->val+leftval,root->val+rightval});
    }
};