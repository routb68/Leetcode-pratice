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
    int dfs(TreeNode* root){
        if(root==NULL)return 0;
        int lf=0,rt=0;
        int l=dfs(root->left);
        if(root->left!=NULL and root->left->val==root->val){
            lf+=l+1;
        }
        int r=dfs(root->right);
        if(root->right!=NULL and root->right->val==root->val){
            rt+=r+1;
        }
        ans=max(ans,lf+rt);
        return max(lf,rt);
    }
    int longestUnivaluePath(TreeNode* root) {
        if(root==NULL)return 0;
        ans=0;
        dfs(root);
        return ans;
    }
};