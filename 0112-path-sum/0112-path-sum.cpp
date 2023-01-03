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
    bool ok;
    void com(TreeNode* root,int sum){
        if(root==NULL){
            return;
        }
        sum-=root->val;
        if(root->left==NULL and root->right==NULL){
            if(sum==0){
                ok=true;
            }
            return;
        }
        com(root->left,sum);
        com(root->right,sum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false;
        ok = false;
        com(root,targetSum);
        return ok;
    }
};