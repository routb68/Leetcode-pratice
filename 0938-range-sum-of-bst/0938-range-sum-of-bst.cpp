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
    void dfs(TreeNode* root,int low,int high){
        if(root->val>=low and root->val<=high) ans+=root->val;
        if(root->left) dfs(root->left,low,high);
        if(root->right) dfs(root->right,low,high);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        ans=0;
        dfs(root,low,high);
        return ans;
    }
};