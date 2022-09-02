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
    int ht,ans;
    void dfs(TreeNode* root,int h){
        if(root==NULL)return ;
        if(h>ht){
            ans=0;
            ht=h;
            ans+=root->val;
        }else if(h==ht){
            ans+=root->val;
        }
        dfs(root->left,h+1);
        dfs(root->right,h+1);
    }
    int deepestLeavesSum(TreeNode* root) {
        ht=-1,ans=0;
        dfs(root,0);
        return ans;
    }
};