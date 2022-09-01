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
    int cnt;
    void dfs(TreeNode* root,int num){
        if(num<=root->val){
            ++cnt;
        }
        if(root->left!=NULL)dfs(root->left,max(root->val,num));
        if(root->right!=NULL)dfs(root->right,max(root->val,num));
    }
    int goodNodes(TreeNode* root) {
        cnt=0;
        dfs(root,INT_MIN);
        return cnt;
    }
};