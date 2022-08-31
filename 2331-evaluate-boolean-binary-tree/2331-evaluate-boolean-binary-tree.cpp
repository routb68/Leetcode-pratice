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
    int dfs(TreeNode* root){
        if(root->left==NULL and root->right==NULL){
            return root->val;
        }
        if(root->val==2){
            return (dfs(root->left) or dfs(root->right));
        }
        return (dfs(root->left) and dfs(root->right));
    }
    bool evaluateTree(TreeNode* root) {
        return dfs(root);
    }
};